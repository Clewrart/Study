#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ʹ��forѭ��ʵ�ּ���1+2+3+��+100�Ĺ���
    int sum = 0;
    int p;//ѭ�����Ʋ������


   for(p=1;p<=100;p++)
   {
        sum = sum + p;
    }

    printf("sum = %d\n", sum);
    return 0;
}
