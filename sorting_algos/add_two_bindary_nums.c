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
    int A[4] = {1, 1, 1, 1};

    int B[4] = {1, 1, 1, 1};
    int C[5];

    int sum = 0, carry = 0;
    for (int i = 0; i < 4; i++)
    {
        sum = A[i] + B[i] + carry;
        C[i] = sum % 2;
        carry = sum / 2;
    }
    C[4] = carry;

    print_arr(C, 5);
    return 0;
}