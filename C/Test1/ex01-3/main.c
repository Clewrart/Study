#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int s,c,r ;

    const double P = 3.1415926;

    printf("������Բ�İ뾶����cm��");

    scanf("%d",&r);

    s = P * r * r;

    c = P * 2 * r;

    printf("Բ�����(ȡ����Ϊ��%d cm2\n",s);

    printf("Բ���ܳ�(ȡ����Ϊ��%d cm\n",c);

    return 0;
}
