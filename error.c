#include "push_swap.h"

void	error(t_stack *stack)
{
	dispfree(stack);
	write(2, "Error\n", 6);
	exit (1);
}

void	check_input(t_stack **stack, int argc)
{
	if (argc == 1)
		error(*stack);
}

void	dispfree(t_stack *stk)
{
	t_stack	*tmp;

	while (stk)
	{
		tmp = stk;
		stk = stk->next;
		free(tmp);
	}
}

long long int	atoi_push(t_stack **stack, const char *str)
{
	int				i;
	long long int	k;
	int				minus;

	k = 0;
	i = 0;
	minus = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!(str[i] >= 48 && str[i] <= 57))
		error(*stack);
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		k = k * 10 + str[i] - 48;
		i++;
	}
	if ((str[i] != ' ' && str[i] != '\0'))
		error(*stack);
	k = k * minus;
	return (k);
}
