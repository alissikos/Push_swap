

void    rra_rrb(t_info **a, char name, t_elem **el)
{
    t_info  *last;
    if (!*a || !((*a)->next))
        return ;
    last = *a;
    while (last->next->next != NULL)
        last = last->next;
    ft_lstadd_front(a, last->next);
    last->next = NULL;
    (*el)->counter++;
}