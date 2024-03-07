#include <stdio.h>
#include <stdlib.h>

#define N 20

void array_print(int* arr, int n);

int main()
{
    int fib[N];
	int p;

    fib[0]=1;//�����е�һ��ڶ���Ϊ1�����±�0���±�1����Ϊ1
    fib[1]=1;

	for(p=2 ; p<=N ; p++)
	{
		fib[p] = fib[p-1] + fib[p-2];
	}



    printf("쳲���������ǰ%d�", N);
    array_print(fib, N);

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
