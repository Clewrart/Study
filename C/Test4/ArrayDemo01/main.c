#include <stdio.h>
#include <stdlib.h>

#define N 10

void array_print(int* arr, int n);

int main()
{
    int arr[N] = { 85, 92, 78, 66, 95, 70, 80, 82, 56, 88 };

    printf("����arr��");
    array_print(arr, N);

    int sum = 0;
    for (int q = 0; q < N; q++)
    {
        sum = sum + arr[q];
    }


    printf("sum = %d\n", sum);

    return 0;
}

/**
 * ������� arr ��ÿһ��Ԫ��
 */
void array_print(int* arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
