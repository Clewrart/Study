#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ʹ��forѭ��ʵ�ּ���100+98+96+��+2�Ĺ��ܣ����100��ʼ�ݼ���
    int sum = 0;
    int p = 100;
    for( ; ; )
    {
        if(p>0)
        {
            sum = sum + p;
            p = p - 2;
        }
        else
        {
            break;
        }
    }
    printf("sum = %d\n", sum);
    return 0;
}
