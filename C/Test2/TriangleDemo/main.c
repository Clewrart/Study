#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main(void)
{
    double x1,x2,x3;
    double s;//���溣�׹�ʽ ����֮�߳���  ֵ
    double a; // ���������ε����
    bool isTriangle = true;  // �ж��������Ƿ񹹳������εĲ������ͱ���


    printf("�����������ε������ߣ�\n");
    scanf("%lf%lf%lf", &x1, &x2, &x3);

    s = x1/2+x2/2+x3/2;
    a = sqrt((s) * ((s)-x1) * ((s)-x2) * ((s)-x3));
    isTriangle = x1+x2>x3 && x1+x3>x2 && x2+x3>x1 ;

    if (isTriangle)
    {
        printf("�����%0.2f \n",s);
    }
    else
    {
        printf("���飡������������Σ�");
    }


    return 0;

}
