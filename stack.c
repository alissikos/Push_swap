#include "push_swap.h"

void	list_add_back(t_stack **stack, int elem) // добавл в конец списка
{
	t_stack	*tmp;

    if (stack && *stack)
	{
        tmp = *stack;
		while (tmp->next) // пока есть укль на след элт
		{
			tmp = tmp->next;
		}
		tmp->next = new_stack(elem);
	}
	else
        *stack = new_stack(elem);
}

int	peek(const t_stack *stack) // ук-ль на первый эл-т 
{
	return (stack->nbr);
}

// int	pop(t_stack **stack) // удаляет элемент, на который указывает head и возвращает его значение
// {
// 	t_stack	*node;
// 	int		out;

// 	node = 0;
// 	if (!stack || !*stack) // провер на наличие списка, провер на наличие эл-та списка
// 		return (0);
// 	node = *stack;
// 	*stack = (*stack)->next;
// 	node->next = NULL;
// 	return (out);
// }
