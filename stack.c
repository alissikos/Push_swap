#include "push_swap.h"

void	list_add_back(t_stack **stack, int elem)
{
	t_stack	*tmp;
	
	if (stack && *stack)
	{
		tmp = *stack;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_stack(elem);
	}
	else
		*stack = new_stack(elem);
}
