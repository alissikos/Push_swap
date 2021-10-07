#include "push_swap.h"

void	sort_array(long long int **array, int start, int end)
{
    int	a;
    int	b;
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
    if (b > start)
        sort_array(array, start, b);
    if (a < end)
        sort_array(array, a, end);
}

int get_index(long long int *arr, int nbr)
{
    int i;

    i = 0;
    while (arr[i] != '\0')
    {
        if (nbr == arr[i])
            return (i);
        i++;
//        printf("Nbr: %d\n", nbr);
//        printf("Index: %d\n", i);
    }
    return (-1);
}