#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;
    int y;
    int z;
    int maxi;

    printf("�����������������ö��ŷָ�����");
    scanf("%d,%d,%d", &x, &y, &z);

    if (x > y && x > z)//ɸѡx �� x�ش���yz
    {
        maxi = x ;
    }

    else if  (z > y)//ɸѡz:z�ش���y�����x��֮ǰ��ѡ�ߣ�����ִ�б�����
    {
        maxi = z ;
    }

    else
    {
        maxi = y ;
    }


    printf("%d��%d��%d֮��ϴ��Ԫ����%d\n", x, y, z, maxi);

    return 0;
}
