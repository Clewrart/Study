#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ʹ��forѭ��ʵ�ּ���1+3+5+��+99�Ĺ���
    int sum = 0;
    int p;


    for(p=1;p<=99;p++)
    {
        if(p%2!=0)
        {
            sum = sum + p;
        }
    }

    printf("sum = %d\n", sum);
    return 0;
}
