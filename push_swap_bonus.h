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

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "push_swap.h"

void				ft_push_b(t_stack **dest, t_stack **src);
void				ft_swap_b(t_stack **stk);
void				ft_rotate_b(t_stack	**stk);
void				rrotate_b(t_stack **stk);
void				rrr_b(t_stack **a, t_stack **b);
void				ss_b(t_stack **a, t_stack **b);
void				ft_reading_one(t_stack **a, t_stack **b);
void				ft_reading_two(t_stack **a, t_stack **b, char *line);
int					ft_gnl(int rd, char **line);
int					ft_strcmp(const char *str1, const char *str2);
int					is_sorted_b(t_stack **stack);

#endif