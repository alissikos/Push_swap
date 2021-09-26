#include "push_swap.h"

// t_stack	*sort(t_stack **stack) // сортировка от мин к макс
// {
// 	int		tmp;
// 	t_stack	*tmp_stack;

// 	if (*stack == 0 || !*stack)
// 		return (*stack);
// 	tmp_stack = pop(stack);
// 	if (!tmp_stack)
// 		return (*stack);
// 	while (*stack)
// 	{
// 		tmp = pop(stack)->nbr;
// 		while (tmp_stack && tmp > peek(tmp_stack))
// 			push(stack, pop(&tmp_stack)->nbr);
// 		push(&tmp_stack, tmp);
// 	}
// }

// commands

t_stack	*new_stack(int argc, int nb) // создание списка
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return (0);
	node->nbr = nb;
	node->next = NULL;
	// node->amount = argc - 1;
	return (node);
}

void	check_duplicates_maxint(t_stack **stack, long long int elem)
{
	t_stack		*tmp;

	tmp = *stack;
	while (tmp != NULL)
	{
		if (tmp->nbr == elem)
			error(*stack);
		if (elem > INT_MAX || elem < INT_MIN)
			error(*stack);
		tmp = tmp->next;
	}
}

int	*array(t_stack **stack, int argc, char **argv)
{
	int				i;
	int				*arr;
	long long int	elem;

	i = 1;
	arr = malloc(sizeof(int) * argc);
	if (!arr)
		return (NULL);
	while (argc != i)
	{
		elem = atoi_push(stack, argv[i]);
		arr[i - 1] = (int)elem;
		i++;
	}
	return (arr);
}

void	ft_print(t_stack *aaa, t_stack *bbb)
{
	t_stack *a = aaa;
	t_stack *b = bbb;
	while(a && a->next)
	{
		printf("Value: %lld\n", a->nbr);
		a = a->next;
	}
	while(b && b->next)
	{
		printf("Value: %lld\n", b->nbr);
		b = b->next;
	}
	write(1, "--------\n", 9);
}

int	main(int argc, char **argv)
{
	t_stack		*a; // создаем голову элт списка
	t_stack		*b;
	t_stack		*node;
	int			i;
	long	long int			elem;

	if (argc == 1)
		error(NULL);
	a = NULL;
	b = NULL;
	i = 1;
	while (i < (argc))
	{
		// node = new_stack(elem);
		elem = atoi_push(&a, argv[i]);
		check_duplicates_maxint(&a, elem);
		list_add_back(argc, &a, elem);
		// new_stack(&b);
		// check_input(&a, argc);
		printf("%lld --- \n", elem);
		i++;
	}
	i = 1;
	t_stack *tmp;
	tmp = a;
	while (tmp->next) // пока есть укль на след элт (принт аргументов)
	{
		printf("Node #%d: %lld\n", i++, tmp->nbr);
		tmp = tmp->next; // передвигаем указатель 
	}
	if (argc <= 4)
		sort_3_elements(&a);
	else if (argc <= 6)
		sort_5_elements(&a, &b, argc);
	printf("Node #%d: %lld\n", i++, tmp->nbr);
	tmp->next = node;
	printf("Node #%d: %lld\n", i++, a->nbr);
	a = a->next;
	while (a)
	{
		printf("Final: %lld\n", a->nbr);
		a = a->next;
	}
	return (1);
}



// int	main(int argc, char **argv)
// {
// 	t_stack *a;
// 	t_stack *b;

	
// 		a = (t_stack *)malloc(sizeof(t_stack));
// 		a->next = (t_stack *)malloc(sizeof(t_stack));
// 		a->next->next = (t_stack *)malloc(sizeof(t_stack));
// 		a->next->next->next = (t_stack *)malloc(sizeof(t_stack));
// 		a->next->next->next->next = (t_stack *)malloc(sizeof(t_stack));
// 		a->next->next->next->next->next = (t_stack *)malloc(sizeof(t_stack));
// 		a->next->next->next->next->next->next = (t_stack *)malloc(sizeof(t_stack));
// 		b = (t_stack *)malloc(sizeof(t_stack));
// 		b->next = NULL;

// 		a->nbr = 45;
// 		a->next->nbr = 5;
// 		a->next->next->nbr = 15;
// 		a->next->next->next->nbr = 30;
// 		a->next->next->next->next->nbr = 6;
// 		a->next->next->next->next->next->nbr = 17;
// 		a->next->next->next->next->next->next->nbr = 12;
// 		a->next->next->next->next->next->next->next = NULL;
// 		sa(&a);
// 		ft_print(a, b);
// 		sb(b);
// 		ft_print(a, b);
// 		pb(&a, &b, argc);
// 		ft_print(a, b);
// 		pa(&a, &b, argc);
// 		ft_print(a, b);
// 		rrr(a, b);
// 		ft_print(a, b);
// 		// pb(&a, &b, argc);
// 		// ft_print(a, b);
// 		// pb(&a, &b, argc);
// 		// ft_print(a, b);
// 		// rb(b);
// 		// ft_print(a, b);
	
// }


