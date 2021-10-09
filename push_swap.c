#include "push_swap.h"

t_stack	*new_stack(int nb)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (0);
	node->nbr = nb;
	node->next = NULL;
	return (node);
}

void	check_duplicates_maxint(t_stack **stack, int elem)
{
	t_stack		*tmp;

	tmp = *stack;
	while (tmp->next != NULL)
	{
		if (tmp->nbr == elem)
			error(*stack);
		tmp = tmp->next;
	}
}

void	ft_validation(int elem)
{
	if (elem > INT_MAX || elem < INT_MIN)
		error(NULL);
	if (elem == '+' || elem == '-')
		error(NULL);
}

int	main(int argc, char **argv)
{
	t_stack			*a;
	t_stack			*b;
	t_info			*info;
	t_stack			*buf;
	int				i;
	long long int	elem;
	
	if (argc == 1)
		error(NULL);
	a = NULL;
	b = NULL;
	i = 1;
	check_input(NULL, argc);
	info = malloc(sizeof(t_info));
	info->arr = malloc(sizeof(long long) * argc - 1);
	while (i < argc)
	{
		elem = atoi_push(&a, argv[i]);
		list_add_back(&a, elem);
		if (i == 1)
		{
			info->head = a;
			buf = a;
		}
		while (buf->next)
			buf = buf->next;
		buf->index = i - 1;
		check_duplicates_maxint(&a, elem);
		info->arr[i - 1] = elem;
		i++;
	}
	sort_array(&info->arr, 0, argc - 2);
	if (argc <= 4)
		sort_3_elements(&a);
	if (argc > 4 && argc <= 6)
		sort_5_elements(&a, &b, &info, argc);
	if (argc <= 101 && argc >= 7)
		stack_100(&a, &b, &info);
	else if (argc > 101)
		stack_500(&a, &b, &info);
	free(info->arr);
	free(info);
	dispfree(a);
	dispfree(b);
	return (1);
}
