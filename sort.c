#include "push_swap.h"

int	is_sorted(t_stack **stack)
{
	t_stack	*tmp;
	int		flag;
	
	tmp = *stack;
	flag = 0;
	if (!tmp)
		error(*stack);
	while (tmp->next)
	{
		if (tmp->nbr > tmp->next->nbr)
			flag++;
		tmp = tmp->next;
	}
	if (flag != 0)
		return (0);
	return (1);
}

void	sort_5_elements(t_stack **a, t_stack **b, t_info **info, int argc)
{
	int	i;
	
	i = 0;
	if (!(*a))
		error(*a);
	while (is_sorted(a) == 0)
	{
		if (argc == 5)
		{
			while ((*a)->next->next != NULL && i < 2)
			{
				(*a)->index = get_index((*info)->arr, (*a)->nbr);
				if ((*a)->index == 0 || (*a)->index == 1)
					pb(b, a);
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
		if ((*b)->next != NULL && (*b)->nbr < (*b)->next->nbr)
			sb(b);
		else
			pa(a, b);
	}
}

void	sort_3_elements(t_stack **stack)
{
	if (!(*stack))
		error(*stack);
	while (is_sorted(stack) == 0)
	{
		if ((*stack)->nbr > (*stack)->next->nbr)
			sa(stack);
		else if ((*stack)->nbr < (*stack)->next->nbr)
			rra(stack);
	}
}
