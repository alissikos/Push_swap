/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   additional.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abridger <abridger@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 15:33:48 by abridger          #+#    #+#             */
/*   Updated: 2021/09/16 16:34:20 by abridger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//void	ft_print_stack(const t_stack *a, t_data *data) // для другой сортировки
//{
//	if (a)
//	{
//		ft_putstr("Number\t");
//		ft_putstr("Order\t");
//		ft_putstr("Flag\t");
//		ft_putstr("Max\t");
//		ft_putstr("Mid\t");
//		ft_putstr("Next\n");
//	}
//	while (a)
//	{
//		ft_putnbr(a->nb);
//		ft_putchar('\t');
//		ft_putnbr(a->indx);
//		ft_putchar('\t');
//		ft_putnbr(a->flag);
//		ft_putchar('\t');
//		ft_putnbr(data->max);
//		ft_putchar('\t');
//		ft_putnbr(data->mid);
//		ft_putchar('\t');
//		ft_putnbr(data->next);
//		ft_putchar('\n');
//		a = a->next;
//	}
//}

//void	testing(t_stack *a, t_stack *b, t_data *data)
//{
//	printf("MID = %d\n", data->mid);
//	printf("Index = %d\n", (a)->indx);
//	printf("Number = %d\n", (a)->nb);
//	printf("NEXT = %d\n", data->next);
//	printf("Стек А:\n");
//	ft_print_stack(a, data);
//	printf("Стек B:\n");
//	ft_print_stack(b, data);
//}

int	ft_strlen(char *str)
{
    int	len;

    len = 0;
    while (*str++ != '\0')
        len++;
    return (len);
}

void	ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_putnbr(int n)
{
    long long	number;

    number = (long long) n;
    if (number < 0)
    {
        write(1, "-", 1);
        number = -number;
    }
    if (number >= 10)
        ft_putnbr(number / 10);
    ft_putchar((number % 10) + '0');
}

void	ft_putstr(char *str)
{
    write(1, str, ft_strlen(str));
}

void	ft_print_order(const t_stack *a) // для проверки, потом удалить функцию
{
	while (a)
	{
//		ft_putnbr(a->indx);
		ft_putchar('\n');
		a = a->next;
	}
}

void	see_stack(const t_stack *a)
{
	if (a)
	{
		ft_putstr("Number\t");
//		ft_putstr("Order\n");
	}
	while (a)
	{
		ft_putnbr(a->nbr);
		ft_putchar('\t');
//		ft_putnbr(a->indx);
		ft_putchar('\n');
		a = a->next;
	}
}

void	testing_100(t_stack *a, t_stack *b)
{
	printf("Стек А:\n");
	see_stack(a);
	printf("Стек B:\n");
	see_stack(b);
}


