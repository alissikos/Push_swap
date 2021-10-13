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

int	ft_gnl(int rd, char **line)
{
	int		i;
	char	ch;
	char	*buf;

	buf = (char *)malloc(sizeof(char) * 4 + 1);
	*line = buf;
	i = 0;
	while (rd > 0 && ch != '\n')
	{
		rd = read(STDIN_FILENO, &ch, 1);
		buf[i++] = ch;
	}
	buf[i] = '\n';
	buf[i++] = '\0';
	return (rd);
}

void	ft_reading_one(t_stack **a, t_stack**b)
{
	char	*line;
	int		rd;

	rd = 1;
	while (ft_gnl(rd, &line))
	{
		if (ft_strcmp("pa\n", line) == 0)
			ft_push_b(a, b);
		else if (ft_strcmp("pb\n", line) == 0)
			ft_push_b(b, a);
		else if (ft_strcmp("sa\n", line) == 0)
			ft_swap_b(a);
		else if (ft_strcmp("sb\n", line) == 0)
			ft_swap_b(b);
		else if (ft_strcmp("sb\n", line) == 0)
			ss_b(a, b);
		else
			ft_reading_two(a, b, line);
	}
	if (line)
		free (line);
}

void	ft_reading_two(t_stack **a, t_stack **b, char *line)
{
	if (ft_strcmp("ra\n", line) == 0)
		ft_rotate_b(a);
	else if (ft_strcmp("rb\n", line) == 0)
		ft_rotate_b(b);
	else if (ft_strcmp("rra\n", line) == 0)
		rrotate_b(a);
	else if (ft_strcmp("rrb\n", line) == 0)
		rrotate_b(b);
	else if (ft_strcmp("rrr\n", line) == 0)
		rrr_b(a, b);
	else
		ft_error(*a);
	if (line)
		free (line);
}

int	main(int argc, char **argv)
{
	t_stack			*a;
	t_stack			*b;
	int				i;
	long long int	elem;

	if (argc == 1)
		exit(0);
	a = NULL;
	b = NULL;
	i = 1;
	while (i < argc)
	{
		elem = atoi_push(&a, argv[i]);
		list_add_back(&a, elem);
		check_duplicates_maxint(&a, elem);
		i++;
	}
	ft_reading_one(&a, &b);
	if (is_sorted_b(&a) == 1 && !b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	ft_isclear(a, b, NULL);
	return (1);
}
