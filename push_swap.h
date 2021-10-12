/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheidy <aheidy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 00:45:06 by aheidy            #+#    #+#             */
/*   Updated: 2021/10/10 00:50:12 by aheidy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	long long int	nbr;
	struct s_stack	*next;
	int				index;
}					t_stack;

typedef struct s_info
{
	long long int	*arr;
	struct s_stack	*head;
}					t_info;

t_stack				*new_stack(int nb);
void				list_add_back(t_stack **stack, int elem);
void				ft_free(t_stack *stk);
void				ft_free_info(t_info *info);
void				ft_isclear(t_stack *a, t_stack *b, t_info *info);
void				ft_error(t_stack *stack);
long long int		atoi_push(t_stack **stack, const char *str);
void				check_input(t_stack **stack, int argc);
void				check_duplicates_maxint(t_stack **stack, int elem);
void				ft_swap(t_stack **stk);
void				ft_rotate(t_stack	**stk);
void				rrotate(t_stack **stk);
void				sort_3_elements(t_stack **stack);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				ft_push(t_stack **dest, t_stack **src);
void				pa(t_stack **dest, t_stack **src);
void				pb(t_stack **dest, t_stack **src);
int					ft_amount(t_stack *stk);
int					ft_check_position(t_stack *stk);
void				sort_100_a(t_stack **a, t_stack **b, t_info **info);
void				sort_b(t_stack **a, t_stack **b);
void				stack_100(t_stack **a, t_stack **b, t_info **info);
int					ft_max_index(t_stack **stk);
int					is_sorted(t_stack **stack);
void				see_stack(const t_stack *a);
int					ft_strlen(char *str);
void				ft_putchar(char c);
void				ft_putnbr(int n);
void				ft_putstr(char *str);
void				sort_array(long long int **array, int start, int end);
int					get_index(long long int *arr, long long int nbr);
void				sort_500_a(t_stack **a, t_stack **b, t_info **info);
void				stack_500(t_stack **a, t_stack **b, t_info **info);
void				sort_5_elements(t_stack **a, t_stack **b, t_info **info, int argc);
void 				ft_sort(t_stack **a, t_stack **b, int argc, t_info **info);

#endif