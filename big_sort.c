/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <aheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 00:45:12 by aheidy            #+#    #+#             */
/*   Updated: 2021/10/10 00:47:27 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_100_a(t_stack **a, t_stack **b, t_info **info)
{
	int	i;

	i = 0;
	while ((*a) != NULL)
	{
		(*a)->index = get_index((*info)->arr, (*a)->nbr);
		if (i > 1 && (*a)->index <= i)
		{
			pb(b, a);
			rb(b);
			i++;
		}
		else if ((*a)->index <= i + 15)
		{
			pb(b, a);
			i++;
		}
		else if ((*a)->index >= i && ft_amount(*a) > 1)
			ra(a);
	}
}

void	sort_500_a(t_stack **a, t_stack **b, t_info **info)
{
	int	i;

	i = 0;
	while ((*a) != NULL)
	{
		(*a)->index = get_index((*info)->arr, (*a)->nbr);
		if (i > 1 && (*a)->index <= i)
		{
			pb(b, a);
			rb(b);
			i++;
		}
		else if ((*a)->index <= i + 30)
		{
			pb(b, a);
			i++;
		}
		else if ((*a)->index >= i && ft_amount(*a) > 1)
			ra(a);
	}
}

void	sort_b(t_stack **a, t_stack **b)
{
	int	max;

	while ((*b) != NULL)
	{
		max = ft_max_index(b);
		if ((*b)->index != max && !ft_check_position(*b))
		{
			while ((*b)->index != max)
				rb(b);
			pa(a, b);
		}
		else if ((*b)->index != max && ft_check_position(*b))
		{
			while ((*b)->index != max)
				rrb(b);
			pa(a, b);
		}
		else if ((*b)->index == max)
			pa(a, b);
	}
}

void	stack_100(t_stack **a, t_stack **b, t_info **info)
{
	while (is_sorted(a) == 0)
	{
		sort_100_a(a, b, info);
		sort_b(a, b);
	}
}

void	stack_500(t_stack **a, t_stack **b, t_info **info)
{
	while (is_sorted(a) == 0)
	{
		sort_500_a(a, b, info);
		sort_b(a, b);
	}
}
