#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // һԪ���η��̵�������
    double a, b, c;
    // һԪ���η��̵��б�ʽ
    double delta;
    // һԪ���η��̵�����ʵ��
    double x1 = 0, x2 = 0;

    printf("����������С���� ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("�������\n");
        return EXIT_FAILURE;
    }

    delta = b * b - 4 * a * c;

    x1=(-b+delta)/(2*a);
    x2=(-b-delta)/(2*a);
    /***********************************************
     * ʵ�����ݣ������б�ʽ����һԪ���η��̵ĸ�
     **********************************************/



    if (delta > 0)
    {
        printf("���̴���������ͬ��ʵ��.\n");

        printf("x1 = %lf, x2 = %lf\n", x1, x2);
    } else if (delta == 0)
    {
        printf("���̴���������ͬ��ʵ��.\n");

        printf("x1 = %lf, x2 = %lf\n", x1, x2);
    } else
    {
        printf("����û��ʵ��.\n");
    }

    return 0;
}
