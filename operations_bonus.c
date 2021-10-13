/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                            :+:      :+:    :+:*/
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <aheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 00:44:53 by aheidy            #+#    #+#             */
/*   Updated: 2021/10/10 00:44:54 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	ft_push_b(t_stack **dest, t_stack **src)
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

void	ft_swap_b(t_stack **stk)
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

void	ss_b(t_stack **a, t_stack **b)
{
	ft_swap_b(a);
	ft_swap_b(b);
}

void	ft_rotate_b(t_stack	**stk)
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

void	rrotate_b(t_stack **stk)
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

void	rrr_b(t_stack **a, t_stack **b)
{
	rrotate_b(a);
	rrotate_b(b);
}
