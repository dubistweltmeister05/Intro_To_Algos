#include <stdio.h>

void print_arr(int *arr, int size)
{
    printf("\n");
    for (int i = 0; i < size; i++)
    {
        printf("\t%d\n", arr[i]);
    }
}
int main()
{
    int arr[6] = {31, 41, 59, 41, 26, 58};

    print_arr(arr, 6);
    for (int j = 1; j < 6; j++)
    {
        int key = arr[j];
        int i = j - 1;

        while (i >= 0 && arr[i] < key)
        {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
    }
    print_arr(arr, 6);

    return 0;
}