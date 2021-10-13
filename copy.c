void	sort_5_elements(t_stack **a, t_stack **b, t_info **info/*, int argc*/)
{
	int	i;
	
	i = 0;
	if (!(*a))
		ft_error(*a);
	if (is_sorted(a) == 0)
	{
//		if (argc == 5)
//		{
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
//		}
//		else if (argc == 6)
//		{
//			while (i < 2)
//			{
//				(*a)->index = get_index((*info)->arr, (*a)->nbr);
//				if ((*a)->index == 0 || (*a)->index == 1)
//				{
//					pb(b, a);
//					i++;
//				}
//				else
//					ra(a);
	}
//	printf("St:");
	sort_3_elements(a);
//	}
	while ((*b) != NULL)
	{
		if ((*b)->next != NULL && (*b)->nbr < (*b)->next->nbr)
			sb(b);
		else
			pa(a, b);
	}
}



void	sort_5_elements(t_stack **a, t_stack **b, t_info **info, int argc)
{
	int	i;
	
	i = 0;
	if (!(*a))
		ft_error(*a);
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