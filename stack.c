/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <aheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 00:45:20 by aheidy            #+#    #+#             */
/*   Updated: 2021/10/10 01:40:28 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*new_stack(int nb)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (0);
	node->nbr = nb;
	node->next = NULL;
	return (node);
}

void	list_add_back(t_stack **stack, int elem)
{
	t_stack	*tmp;

	if (stack && *stack)
	{
		tmp = *stack;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_stack(elem);
	}
	else
		*stack = new_stack(elem);
}
