#include "search.h"

int search::binary_search(int *arr, int l, int r, int x) // ascending array only!
{
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (arr[m] == x)
        {
            return m;
        }
        else if (arr[m] > x)
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return -1;
}