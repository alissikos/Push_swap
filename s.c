#include "push_swap.h"

// int ft_amount(t_stack **stk)
// {
//     int amount;

//     if (!stk)
//         return (0);
//     amount = 1;
//     while ((*stk)->next)
//     {
//         amount++;
//         stk = &(*stk)->next;
//     }
//     return (amount);
// }

// int ft_max_index(t_stack **stk)
// {
//     int max_i;

//     max_i = 1;
//     if (stk)
//     {
//         max_i = (*stk)->index;
//         while (stk != NULL)
//         {
//             if (max_i < (*stk)->index)
//                 max_i = (*stk)->index;
//             stk = &(*stk)->next;
//         }
//     }
//     return (max_i);
// }

// int ft_check_position(t_stack **stk)
// {
//     int len;
//     int pos;
//     int check;

//     pos = 1;
//     if (!stk)
//         return (0);
//     len = ft_amount(stk);
//     check = ft_max_index(stk);
//     while ((*stk)->next && (*stk)->index != check)
//     {
//         pos++;
//         stk = (*stk)->next;
//     }
//     if (pos > len / 2)
//         check = 1;
//     else
//         check = 0;
//     return (check);
// }

// void    sort_100_a(t_stack **a, t_stack **b, int argc)
// {
//     int i;

//     i = 0;
//     while ((*a) != NULL)
//     {
//         if (i > 1 && (*a)->index <= i)
//         {
//             pb(a, b);
//             rb(*b);
//             i++;
//         }
//         else if ((*a)->index <= i + 15)
//         {
//             pb(a, b);
//             i++;
//         }
//         else if ((*a)->index >= i && ft_amount(*a) > 1)
//             ra(a);
//     }
// }

// void sort_100_b(t_stack **a, t_stack **b, int argc)
// {
//     int check;

//     while ((*b) != NULL)
//     {
//         check = ft_max_index(*b);
//         if ((*b)->index != check && !ft_check_position(*b))
//         {
//             while ((*b)->index != check)
//                 rrb(b);
//             pa(a, b);
//         }
//         else if ((*b)->index == check)
//             pa(a, b);
//     }
// }

// void    stack_100(t_stack **a, t_stack **b, t_stack *data, int argc)
// {
//     if (is_sorted = 1) // проверка на отсортированность
//     {
//         sort_100_a(a, b, argc);
//         sort_100_b(a, b, argc);
//     }
// }