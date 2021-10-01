

void	rrb(t_stack **first)
{
    t_stack	*tmp;
    t_stack	*prelast;

    if (!first || !(*first))
        return ;
    if (!((*first)->next))
        return ;
    tmp = *first;
    prelast = *first;
    while (prelast->next->next) // пока у предпоследнего есть укль на след элт
        prelast = prelast->next; // крутим до предпоследнего
    *first = prelast->next;
    prelast->next->next = tmp;
    prelast->next = NULL;
}

