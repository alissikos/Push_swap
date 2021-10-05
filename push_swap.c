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

t_stack	*new_stack(int nb) // создание списка
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
//    if (!tmp)
//        error(*stack);
//    tmp = tmp->next;
    if (elem > INT_MAX || elem < INT_MIN)
        error(*stack);
	while (tmp->next != NULL)
	{
		if (tmp->nbr == elem)
			error(*stack);
		tmp = tmp->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack		        *a; // создаем голову элт списка
	t_stack		        *b;
    t_info              *info;
    t_stack             *buf;
	int			        i;
	long	long int    elem;

	if (argc == 1)
		error(NULL);
	a = NULL;
	b = NULL;

	i = 1;
    check_input(NULL, argc);
    info = malloc(sizeof(t_info));
    info->arr = malloc(sizeof(long long) * argc);
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
//        printf("last %lld\n", buf->nbr);
//        check_duplicates_maxint(&a, elem);
        info->arr[i - 1] = elem;
//        printf("massive %lld\n", info->arr[i - 1]);
//		printf("%lld --- \n", elem);
//        printf("I: %d\n", i);
		i++;
	}
    info->arr[i - 1] = '\0';
    sort_array(&info->arr, 0, argc - 2);
//    i = 0; // for print
//    while (i < argc - 2) // for print
//    {
//        printf("Arr: %lld\n", info->arr[i]);
//        i++;
//    } // for print

//    while (a)
//    {
//        printf("A: %lld\n", a->nbr);
//        if (a->next)
//            a = a->next;
//        if (!(a->next))
//            break;
//    }
//    see_stack(a);
//	while (tmp) // пока есть укль на след элт (принт аргументов)
//	{
//		printf("Node #%d: %lld\n", i++, tmp->nbr);
//		tmp = tmp->next; // передвигаем указатель
//	}
	if (argc <= 4)
		sort_3_elements(&a);
	// else if (argc <= 6)
	// 	sort_5_elements(&a, &b, argc);
    if (argc <= 101 && argc >= 5)
        stack_100(&a, &b, &info);
    else if (argc > 101)
        stack_500(&a, &b, &info);
//	while (a) // print final
//	{
//		printf("Final: %lld\n", a->nbr);
//		a = a->next;
//	}
//    see_stack(a);
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


//int	*array(t_stack **stack, int argc, char **argv)
//{
//	int				i;
//	int				*arr;
//	long long int	elem;
//
//	i = 1;
//	arr = malloc(sizeof(int) * argc);
//	if (!arr)
//		return (NULL);
//	while (argc != i)
//	{
//		elem = atoi_push(stack, argv[i]);
//		arr[i - 1] = (int)elem;
//		i++;
//	}
//	return (arr);
//}

//void	ft_print(t_stack *aaa, t_stack *bbb)
//{
//	t_stack *a = aaa;
//	t_stack *b = bbb;
//	while(a && a->next)
//	{
//		printf("Value: %lld\n", a->nbr);
//		a = a->next;
//	}
//	while(b && b->next)
//	{
//		printf("Value: %lld\n", b->nbr);
//		b = b->next;
//	}
//	write(1, "--------\n", 9);
//}
