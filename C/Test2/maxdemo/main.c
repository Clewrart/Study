#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;
    int y;
    int maxi;

    printf("�����������������ö��ŷָ�����");
    scanf("%d,%d", &x, &y);


    if( x > y )
    {
        maxi = x;
    }

    else
    {
        maxi = y;
    }

    printf("%d��%d֮��ϴ��Ԫ����%d\n", x, y, maxi);

    return 0;
}
