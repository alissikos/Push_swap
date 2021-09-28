#include "push_swap.h"

void	error(t_stack *stack)
{
	dispfree(stack);
	write(2, "Error\n", 6);
	exit (1);
}

void	check_input(t_stack **stack, int argc) //провер, что подается на ввод
{
	int	i;

	i = 1; //  перв арг(0) - прогр
	if (argc == 1)
		error(*stack);
}

void	dispfree(t_stack *stk)
{
	t_stack	*tmp;

	while (stk)
	{
		tmp = stk;
		// printf("%ld ", stk->nbr);
		stk = stk->next;
		free(tmp);
	}
	printf("\n");
}	

long long int	atoi_push(t_stack **stack, const char *str) // передать еще лист (стек а для очищения) - проверка аргумента (число)
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
	else if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		k = k * 10 + str[i] - 48;
		i++;
	}
	if (str[i] != ' ' && str[i] != '\0')
		error(*stack);
	k = k * minus;
	return (k);
}
