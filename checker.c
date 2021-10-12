/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <aheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 00:44:48 by aheidy            #+#    #+#             */
/*   Updated: 2021/10/10 00:47:49 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv, t_stack **stack, t_info **info)
{
	int	i;

	i = 1;
	if (argc == 1)
		ft_error(NULL);
	while (i < argc)
	{
		elem = atoi_push(&a, argv[i]);
		list_add_back(&a, elem);
		check_duplicates_maxint(&a, elem);
		i++;
	}
	while ()
		get_next_line
}
