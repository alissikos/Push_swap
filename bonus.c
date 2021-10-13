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

int	is_sorted_b(t_stack **stack)
{
	t_stack	*tmp;
	int		flag;

	tmp = *stack;
	flag = 0;
	if (!tmp)
		ft_error(*stack);
	while (tmp->next)
	{
		if (tmp->nbr > tmp->next->nbr)
			flag++;
		tmp = tmp->next;
	}
	if (flag != 0)
		return (0);
	return (1);
}