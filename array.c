#include "push_swap.h"

void	sort_array(long long int **array, int start, int end)
{
    int a;
    int b;
    int mid;
    int c;

    a = start;
    b = end;
    mid = (*array)[(end + start) / 2];
    while (a <= b)
    {
        while ((*array)[a] < mid && a < end)
            a++;
        while ((*array)[b] > mid && b > start)
            b--;
        if (a <= b && a <= end && b >= start)
        {
            c = (*array)[a];
            (*array)[a] = (*array)[b];
            (*array)[b] = c;
            a++;
            b--;
        }
    }
//    if (arr_is_sorted(array))
//        return ;
    if (b > start)
        sort_array(array, start, b);
    if (a < end)
        sort_array(array, a, end);
}

int	arr_is_sorted(long long int **array)
{
    int i;

    i = 0;
    while ((*array)[i])
    {
        if ((*array)[i] < (*array)[i + 1])
            return (0);
        i++;
    }
    return (1); // отсорт!!!!!!
}

int get_index(long long int *arr, long long int nbr)
{
    int i;

    i = 0;
    while (nbr != arr[i])
    {
//        if (nbr == arr[i])
//            return (i);
        i++;
//        printf("Nbr: %d\n", nbr);
//        printf("Index: %d\n", i);
    }
    return (i);
}