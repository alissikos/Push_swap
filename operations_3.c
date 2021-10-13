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

void	rrotate(t_stack **stk)
{
	t_stack	*tmp;
	t_stack	*first;
	t_stack	*last;

	if (!(*stk) || !(*stk)->next)
		return ;
	tmp = *stk;
	last = *stk;
	while (tmp->next)
	{
		if (!tmp->next->next)
			last = tmp;
		tmp = tmp->next;
	}
	first = tmp;
	first->next = *stk;
	last->next = NULL;
	*stk = first;
}

void	rra(t_stack **a)
{
	rrotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	rrotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rrotate(a);
	rrotate(b);
	write(1, "rrr\n", 4);
}
