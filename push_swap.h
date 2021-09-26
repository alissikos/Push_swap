#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_stack
{
	long long int	nbr;
    int             index;
    int             flag;
	struct s_stack	*next;
//	int				amount; // кол-во элементов в списке
	struct s_stack	*head; // укль на голову списка 
	struct s_stack	*tail;
}					t_stack;

t_stack				*new_stack(int argc, int nb);
void				list_add_back(int argc, t_stack **stack, int elem);
int					peek(const t_stack *stack);
t_stack				*pop(t_stack **stack);
void				dispfree(t_stack *stk);
void				error(t_stack *stack);
long long int		atoi_push(t_stack **stack, const char *str);
void				check_input(t_stack **stack, int argc);
void				check_duplicates_maxint(t_stack **stack, long long int elem);
void				ft_swap(t_stack **stk);
void				ft_rotate(t_stack	**stk);
void				rrotate(t_stack **stk);
void				sort_3_elements(t_stack **stack);
void				sa(t_stack **a);
void				sb(t_stack *b);
void				ss(t_stack *a, t_stack *b);
void				ra(t_stack *a);
void				rb(t_stack *b);
void				rra(t_stack *a);
void				rrb(t_stack *b);
void				rrr(t_stack *a, t_stack *b);
int	    			ft_push(t_stack **stk, int nbr, int argc);
void				pa(t_stack **a, t_stack **b, int argc);
void				pb(t_stack **a, t_stack **b, int argc);
void				sort_5_elements(t_stack **a, t_stack **b, int argc);
int     			ft_amount(t_stack **stk);
int					*array(t_stack **stack, int argc, char **argv);







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