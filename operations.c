#include "push_swap.h"

// void	ft_sa(t_stack *stk) // swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements
// {
// 	int		tmp;

// 	if (stk == NULL || stk->next == NULL)
// 		return ;
// 	tmp = stk->nbr;
// 	stk->nbr = stk->next->nbr;
// 	stk->next->nbr = tmp;
// }

// int	ft_push(t_stack **stk, int nbr, int argc) //куда пушим и откуда 
// {
// 	t_stack	*new;

// 	if (!stk)
// 		return (0);
// 	if (!*stk) // если нет списка(головы)
// 	{
// 		*stk = new_stack(argc, nbr);
// 		if (!stk)
// 			return (0);
// 		return (1);
// 	}
// 	new = new_stack(argc, nbr);
// 	if (!new)
// 		return (0);
// 	new->next =  *stk;
// 	*stk = new;
// 	return (1);
// }

// void   ft_push(t_stack **first, t_stack **second) // Natashi
// {
//     t_stack  *tmp;
//     if (!*second)
//         return ;
//     if (!*first)
//     {
//         *first = ft_lstnew((*second)->nbr);
//         (*first)->flag = (*second)->flag;
//         (*first)->index = (*second)->index;
//         tmp = *second;
//         *second = (*second)->next;
//         free(tmp);
//     }
//     else
//     {
//         ft_lstadd_front(first, ft_lst_copy(*second));
//         tmp = *second;
//         *second = (*second)->next;
//         free(tmp);
//     }

t_stack	*ft_lstlast(t_stack *lst)
{
	t_stack	*l;

	l = lst;
	if (l != NULL)
	{
		while ((*l).next != NULL)
			l = (*l).next;
		return (l);
	}
	return (NULL);
}	

void	ft_push(t_stack *this, int nbr, int argc) // Dima
{
	t_stack	*new;

	this->tail = ft_lstlast;
	new = new_stack(argc, nbr);
	if (this->head == NULL)
	{
		this->head = new;
		this->tail = new;
	}
	else
	{
		this->head->next = new;
		new->prev = this->head;
		this->head = new;
	}

void	pa(t_stack **a, t_stack **b, int argc)
{
	// ft_push(a, pop(b), argc); // пуш в стек А из стека Б (с удалением первого элемента в Б) (where, from)
	// (*a)->amount += 1;
	// (*b)->amount -= 1; // подумать при пустом стеке (если amount == 0 ??)
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b, int argc)
{
	// ft_push (b, pop(a), argc); // пуш в стек Б из стека А (с удалением первого элемента в А)
	// (*a)->amount -= 1; // подумать при пустом стеке (если amount == 0 ??)
	// (*b)->amount += 1;
	write(1, "pb\n", 3);
}

void	ft_swap(t_stack **stk)
{
	// t_stack	*elem1;
	// t_stack	*elem2;
	t_stack		*tmp;

	// tmp = stk;
	if ((*stk) && (*stk)->next)
	{
		tmp = (*stk)->next;
		if ((*stk)->next->next)
			(*stk)->next = (*stk)->next->next;
		else
			(*stk)->next = NULL;
		tmp->next = (*stk);
		(*stk) = tmp;
		tmp = NULL;
	}
}

void	sa(t_stack **a)
{
	ft_swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack *b) 
{
	ft_swap(&b);
	write(1, "sb\n", 3);
}

void	ss(t_stack *a, t_stack *b)
{
	ft_swap(&a);
	ft_swap(&b);
	write(1, "ss\n", 3);
}

void	ft_rotate(t_stack	**stk)
{
	t_stack	*last;
	t_stack	*first;

	if (!(*stk)->next)
		return ;
	last = *stk;
	first = (*stk)->next;
	while ((*stk)->next)
	{
		// printf ("%lld", (*stk)->nbr);
		*stk = (*stk)->next;
	}
	(*stk)->next = last;
	last->next = NULL;
	*stk = first;
	// printf("First: %lld\n", (*stk)->nbr);
	// printf("Last: %lld\n", last->nbr);
}

void	ra(t_stack *a)
{
	ft_rotate(&a);
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	ft_rotate(&b);
	write(1, "rb\n", 3);
}

void	rrotate(t_stack **stk)
{
	t_stack	*tmp;
	t_stack	*first;
	t_stack	*last;

	if (!(*stk)->next)
		return ;
	tmp = *stk;
	last = *stk;
	while (tmp->next)
	{
		if (!tmp->next->next)
			last = tmp;
		tmp = tmp->next;
	}
	first = tmp;
	first->next = *stk;
	last->next = NULL;
	*stk = first;
}

void	rra(t_stack *a)
{
	rrotate(&a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	rrotate(&b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	rrotate(&a);
	rrotate(&b);
	write(1, "rrr\n", 4);
}
