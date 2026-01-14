#include <stdio.h>
#include <stdlib.h>
int bs(int *arr, int l, int r, int x)
{
    while (l <= r)
    {
        int mid = (l) + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
        {
            r = mid - 1;
        }

        else
            l = mid + 1;
    }
    return -1;
}
int main()
{
    int arr[] = {-5, -3, -1, 1, 3, 5, 7, 9};
    int l = 0, r = 8;

    int x = 7;

    printf("%d", bs(arr, l, r,x));
}