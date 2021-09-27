#include "push_swap.h"

int	is_sorted(const t_stack *stack)
{
	int	i;

	i = 1; // почему ? 
	if (!stack)
		error(stack);
	while (stack->next)
	{
		i++; // почему ? 
		if (stack->nbr > stack->next->nbr)
			return (0);
		stack = stack->next; // двигаемся по списку
	}
	// if (amount != i) // почему ? 
	// 	return (0);
	return (1);
}

// int find_max_index(t_stack *a)
// {
//     t_stack *temp;

//     int     max;
//     int     max_index;
//     int     i;
//     max_index = 0;
//         max = temp->nbr;
//         max_index = i;
//         while (temp)
//         {
//             if (temp->nbr > max)
//             {
//                 max = temp->nbr;
//                 max_index = i;
//             }
//             temp = temp->next;
//             i++;
//         }
//         return (max_index);
// }

void frotate(t_stack **stk, int index, int size) // прокрутка стека до нужного элта
{
    if (index <= size / 2)
    {
        while (index > 0)
        {
            ra(*stk);
            index--;
        }
    }
    else
    {
        while (index < size)
        {
            rra(*stk);
            index++;
        }
    }
}

void	sort_3_elements(t_stack **stack)
{
	if (!(*stack))
		error(*stack);
	// if (is_sorted = 1) // сделать флаг/проверку на отсортированность
	// 	error(stack);
	if ((*stack)->nbr > (*stack)->next->nbr)
		sa(stack);
	else if ((*stack)->nbr < (*stack)->next->nbr)
		ft_rotate(stack);
}

void	sort_5_elements(t_stack **a, t_stack **b, int argc)
{
	if (is_sorted(*a) == 0)
	{
		frotate(a, find_max_index(*a), 5);
		pb(a, b);
		frotate(a, find_max_index(*a), 4);
		pb(a, b);
		sort_3_elements(a);
		pa(a, b);
		pa(a, b);
		ra(*a);
		ra(*a);
	}
}

// static int	sum(t_stack *a, int depth)
// {
// 	int	sum;

// 	sum = 0;
// 	while (a && depth--)
// 	{
// 		sum += a->nbr;
// 		a = a->next;
// 	}
// 	return (sum);
// }

// void	quick_sort(t_stack **a, t_stack **temp, int n)
// {
// 	int			toplen;
// 	int			median;
// 	int			i;
// 	static int	it;
// 	t_stack 	*node;

// 	if (n == 1)
// 		return ;
// 	toplen = 0;
// 	median = sum(*a, n) / n; // ????? dummy median (fix later);
// 	i = 0;
// }