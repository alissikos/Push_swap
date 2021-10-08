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
    int             index;
//	struct s_stack	*head; // укль на голову списка
//	struct s_stack	*tail;
}					t_stack;

typedef struct s_info
{
    long long int   *arr;
//    int             index;
//    int             flag;
    struct s_stack  *head;

}                   t_info;

t_stack				*new_stack(int nb);
void				list_add_back(t_stack **stack, int elem);
int					peek(const t_stack *stack);
int					pop(t_stack **stack);
void				dispfree(t_stack *stk);
void				error(t_stack *stack);
long long int		atoi_push(t_stack **stack, const char *str);
void				check_input(t_stack **stack, int argc);
void				check_duplicates_maxint(t_stack **stack, int elem);
void				ft_swap(t_stack **stk);
void				ft_rotate(t_stack	**stk);
void				rrotate(t_stack **stk);
void				sort_3_elements(t_stack **stack);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void	            ft_push(t_stack **dest, t_stack **src);
void	            pa(t_stack **dest, t_stack **src);
void	            pb(t_stack **dest, t_stack **src);
int                 ft_amount(t_stack *stk);
int					*array(t_stack **stack, int argc, char **argv);
int                 ft_check_position(t_stack *stk);
void                sort_100_a(t_stack **a, t_stack **b, t_info **info);
void                sort_b(t_stack **a, t_stack **b);
void                stack_100(t_stack **a, t_stack **b, t_info **info);
int                 ft_max_index(t_stack **stk);
int	                is_sorted(t_stack **stack);
void	            see_stack(const t_stack *a);
int	                ft_strlen(char *str);
void	            ft_putchar(char c);
void	            ft_putnbr(int n);
void	            ft_putstr(char *str);
void	            ft_print_order(const t_stack *a);
void	            sort_array(long long int **array, int start, int end);
int                 get_index(long long int *arr, long long int nbr);
void                sort_500_a(t_stack **a, t_stack **b, t_info **info);
void                stack_500(t_stack **a, t_stack **b, t_info **info);
void	            sort_5_elements(t_stack **a, t_stack **b, t_info **info, int argc);
int	                arr_is_sorted(long long int **array);






// typedef struct s_checker
// {
// 	t_stack			*a;
// 	t_stack			*b;	
// 	char			*line;
// 	char			*inst;
// 	char			**split;
// }					t_checker;

// t_stack	*new_node(int nb);
// int		push(t_stack **stack, int elem);
// t_stack	*pop(t_stack **stack);
// void	ft_swap(t_stack *stk);
// void	rotate(t_stack **stk);
// void	rrotate(t_stack **stk);



// typedef struct s_stacks
// {
// 	int				count_a;
// 	int				count_b;
// 	int				min;
// 	int				max;
// 	int				med;
// 	t_stack			*a;
// 	t_stack			*b;
// }					t_stacks;

#endif