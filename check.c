/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <aheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 00:44:53 by aheidy            #+#    #+#             */
/*   Updated: 2021/10/10 00:44:54 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_input(t_stack **stack, int argc)
{
	if (argc == 1)
		ft_error(*stack);
}

void	check_duplicates_maxint(t_stack **stack, int elem)
{
	t_stack		*tmp;
	
	tmp = *stack;
	while (tmp->next != NULL)
	{
		if (tmp->nbr == elem)
			ft_error(*stack);
		tmp = tmp->next;
	}
}

long long int	atoi_push(t_stack **stack, const char *str)
{
	int				i;
	long long int	k;
	int				minus;
	
	k = 0;
	i = 0;
	minus = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!(str[i] >= 48 && str[i] <= 57))
		ft_error(*stack);
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		k = k * 10 + str[i] - 48;
		i++;
	}
	if ((str[i] != ' ' && str[i] != '\0'))
		ft_error(*stack);
	k = k * minus;
	return (k);
}
