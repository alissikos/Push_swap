/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <aheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 00:45:00 by aheidy            #+#    #+#             */
/*   Updated: 2021/10/10 15:43:20 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(t_stack **a, t_stack **b, int argc, t_info **info)
{
	if (argc <= 4)
		sort_3_elements(a);
	if (argc > 4 && argc <= 6)
		sort_5_elements(a, b, info/*, argc*/);
	if (argc <= 101 && argc >= 7)
		stack_100(a, b, info);
	else if (argc > 101)
		stack_500(a, b, info);
}

int	main(int argc, char **argv)
{
	t_stack			*a;
	t_stack			*b;
	t_info			*info;
	int				i;
	long long int	elem;

	if (argc == 1)
		ft_error(NULL);
	a = NULL;
	b = NULL;
	i = 1;
	check_input(NULL, argc);
	info = malloc(sizeof(t_info));
	info->arr = malloc(sizeof(long long) * argc - 1);
	while (i < argc)
	{
		elem = atoi_push(&a, argv[i]);
		list_add_back(&a, elem);
		if (i == 1)
			info->head = a;
		check_duplicates_maxint(&a, elem);
		info->arr[i - 1] = elem;
		i++;
	}
	sort_array(&info->arr, 0, argc - 2);
	ft_sort(&a, &b, argc, &info);
//	see_stack(a);
	ft_isclear(a, b, info);
	return (1);
}
