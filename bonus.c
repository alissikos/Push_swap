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

int	ft_strcmp(const char *str1, const char *str2)
{
	size_t	i;

	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0'))
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}

void	rrr_b(t_stack **a, t_stack **b)
{
	rrotate_b(a);
	rrotate_b(b);
}
