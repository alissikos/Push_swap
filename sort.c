#include "push_swap.h"

int	is_sorted(t_stack **stack)
{
    t_stack    *tmp;
    int	flag;

    tmp = *stack;
	flag = 0;
	if (!tmp)
		error(*stack);
	while (tmp->next)
	{
//        printf("Tmp: %lld/n", tmp->nbr);
		if (tmp->nbr > tmp->next->nbr)
			flag++; // знак того что ЕСТЬ неупорядоченный элемент
        tmp = tmp->next; // двигаемся по списку
	}
    if (flag != 0)
        return (0); // несортир
	return (1); // сортир!!!!!!
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
            ra(stk);
            index--;
        }
    }
    else
    {
        while (index < size)
        {
            rra(stk);
            index++;
        }
    }
}

//void	sort_5_elements(t_stack **a, t_stack **b, t_info **info/*, int argc*/)
void	sort_5_elements(t_stack **a, t_stack **b, t_info **info, int argc)
{
    int i;

    i = 0;
    if (!(*a))
        error(*a);
    while (is_sorted(a) == 0) //пока НЕСОРТИР
    {
        if (argc == 5)
        {
            while ((*a)->next->next != NULL && i < 2) // сделать так, чтобы цикл прошел всего 2 раза (чтобы в А осталось 3 числа)
            {
                (*a)->index = get_index((*info)->arr, (*a)->nbr);
                if ((*a)->index == 0 || (*a)->index == 1)
                {
                    pb(b, a);
//                    if (argc == 6)
//                        i++;
                }
                else
                    ra(a);
            }
        }
        else if (argc == 6)
        {
            while (i < 2)
            {
                (*a)->index = get_index((*info)->arr, (*a)->nbr);
                if ((*a)->index == 0 || (*a)->index == 1)
                {
                    pb(b, a);
                    i++;
                }
                else
                    ra(a);
            }
        }
        sort_3_elements(a);
    }
    while ((*b) != NULL)
    {
        if ((*b)->next != NULL && (*b)->nbr < (*b)->next->nbr )
            sb(b);
        else
            pa(a, b);
    }
}

void	sort_3_elements(t_stack **stack)
{
	if (!(*stack))
		error(*stack);
    while (is_sorted(stack) == 0) //пока НЕСОРТИР
    {
        if ((*stack)->nbr > (*stack)->next->nbr)
            sa(stack);
        else if ((*stack)->nbr < (*stack)->next->nbr)
            rra(stack);
    }
}

// void	sort_5_elements(t_stack **a, t_stack **b, int argc)
// {
// 	if (is_sorted(*a) == 0)
// 	{
// 		frotate(a, find_max_index(*a), 5);
// 		pb(a, b);
// 		frotate(a, find_max_index(*a), 4);
// 		pb(a, b);
// 		sort_3_elements(a);
// 		pa(a, b);
// 		pa(a, b);
// 		ra(*a);
// 		ra(*a);
// 	}
// }

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