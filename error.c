/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <aheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 00:44:53 by aheidy            #+#    #+#             */
/*   Updated: 2021/10/10 00:44:54 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(t_stack *stk)
{
	t_stack	*tmp;
	
	tmp = NULL;
	while (stk)
	{
		tmp = stk;
		stk = stk->next;
		free(tmp);
	}
	stk = NULL;
	tmp = NULL;
}

void	ft_error(t_stack *stack)
{
	ft_free(stack);
	write(2, "Error\n", 6);
	exit (1);
}

void	ft_free_info(t_info *info)
{
	if (info)
	{
		if (info->arr)
		{
			free (info->arr);
			info->arr = NULL;
		}
		free(info);
		info = NULL;
	}
}

void	ft_isclear(t_stack *a, t_stack *b, t_info *info)
{
	ft_free(a);
	ft_free(b);
	ft_free_info(info);
}
