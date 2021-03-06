/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <aheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 00:44:56 by aheidy            #+#    #+#             */
/*   Updated: 2021/10/10 00:44:57 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_stack **dest, t_stack **src)
{
	t_stack	*tmp;

	tmp = NULL;
	if (*src)
	{
		if ((*src) && (*src)->next)
			tmp = (*src)->next;
		(*src)->next = (*dest);
		(*dest) = (*src);
		(*src) = tmp;
	}
}

void	pa(t_stack **dest, t_stack **src)
{
	ft_push(dest, src);
	write(1, "pa\n", 3);
}

void	pb(t_stack **dest, t_stack **src)
{
	ft_push (dest, src);
	write(1, "pb\n", 3);
}

void	ft_swap(t_stack **stk)
{
	t_stack		*tmp;

	if ((*stk) && (*stk)->next)
	{
		tmp = (*stk)->next;
		if ((*stk)->next->next)
			(*stk)->next = (*stk)->next->next;
		else
			(*stk)->next = NULL;
		tmp->next = (*stk);
		(*stk) = tmp;
		tmp = NULL;
	}
}

void	sa(t_stack **a)
{
	ft_swap(a);
	write(1, "sa\n", 3);
}
