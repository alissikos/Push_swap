/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <aheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 00:44:41 by aheidy            #+#    #+#             */
/*   Updated: 2021/10/10 00:48:03 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_array(long long int **array, int start, int end)
{
	int	a;
	int	b;
	int	mid;
	int	c;
	
	a = start;
	b = end;
	mid = (*array)[(end + start) / 2];
	while (a <= b)
	{
		while ((*array)[a] < mid && a < end)
			a++;
		while ((*array)[b] > mid && b > start)
			b--;
		if (a <= b && a <= end && b >= start)
		{
			c = (*array)[a];
			(*array)[a] = (*array)[b];
			(*array)[b] = c;
			a++;
			b--;
		}
	}
	if (b > start)
		sort_array(array, start, b);
	if (a < end)
		sort_array(array, a, end);
}

int	get_index(long long int *arr, long long int nbr)
{
	int	i;
	
	i = 0;
	while (nbr != arr[i])
		i++;
	return (i);
}
