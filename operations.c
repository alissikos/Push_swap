#include "push_swap.h"

void	ft_push(t_stack **dest, t_stack **src)
{
	t_stack	*tmp;

	tmp = NULL;
	if (*src)
	{
		if ((*src) && (*src)->next)
			tmp = (*src)->next;
		(*src)->next = (*dest);
		(*dest) = (*src);
		(*src) = tmp;
	}
}

void	pa(t_stack **dest, t_stack **src)
{
	ft_push(dest, src);
	write(1, "pa\n", 3);
}

void	pb(t_stack **dest, t_stack **src)
{
	ft_push (dest, src);
	write(1, "pb\n", 3);
}

void	ft_swap(t_stack **stk)
{
	t_stack		*tmp;

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

void	sb(t_stack **b)
{
	ft_swap(b);
	write(1, "sb\n", 3);
}

void	ss(t_stack **a, t_stack **b)
{
	ft_swap(a);
	ft_swap(b);
	write(1, "ss\n", 3);
}

void	ft_rotate(t_stack	**stk)
{
	t_stack	*last;
	t_stack	*first;

	if (!(*stk) || !(*stk)->next)
		return ;
	last = *stk;
	first = (*stk)->next;
	while ((*stk)->next)
		*stk = (*stk)->next;
	(*stk)->next = last;
	last->next = NULL;
	*stk = first;
}

void	ra(t_stack **a)
{
	ft_rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack **b)
{
	ft_rotate(b);
	write(1, "rb\n", 3);
}

void	rrotate(t_stack **stk)
{
	t_stack	*tmp;
	t_stack	*first;
	t_stack	*last;

	if (!(*stk) || !(*stk)->next)
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

void	rra(t_stack **a)
{
	rrotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack **b)
{
	rrotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack **a, t_stack **b)
{
	rrotate(a);
	rrotate(b);
	write(1, "rrr\n", 4);
}
