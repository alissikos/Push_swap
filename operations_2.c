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

void	sb(t_stack **b)
{
	ft_swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	ft_swap(a);
	ft_swap(b);
	write(1, "ss\n", 3);
}

void	ft_rotate(t_stack	**stk)
{
	t_stack	*last;
	t_stack	*first;

	if (!(*stk) || !(*stk)->next)
		return ;
	last = *stk;
	first = (*stk)->next;
	while ((*stk)->next)
		*stk = (*stk)->next;
	(*stk)->next = last;
	last->next = NULL;
	*stk = first;
}

void	ra(t_stack **a)
{
	ft_rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	ft_rotate(b);
	write(1, "rb\n", 3);
}
