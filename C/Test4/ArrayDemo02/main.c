#include <stdio.h>
#include <stdlib.h>

#define N 10

void array_print(int* arr, int n);

int main()
{
    int arr[N] = { 85, 92, 78, 66, 95, 70, 80, 82, 56, 88 };

    printf("����arr��");
    array_print(arr, N);

    int mini = 0;

    for(int q = 0;q < N ; q++)
    {
        if(arr[q+1] > arr[q])
        {
            mini=arr[q];

        }
    }

    printf("������СԪ��mini = %d\n", mini);

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
