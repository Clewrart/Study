#include <stdio.h>
#include <stdlib.h>

void swap(double *x, double *y);

int main()
{
    double w1, w2;
    printf("����������С�����ö��ŷָ��");
    scanf("%lf,%lf", &w1, &w2);
    printf("����ǰ��w1 = %lf, w2 = %lf\n", w1, w2);

    swap(&w1,&w2);

    printf("������w1 = %lf, w2 = %lf\n", w1, w2);

    return 0;
}

/**
 * ��������x��y��ֵ
 */
void swap(double *x, double *y)
{
    double temp = *x;
    *x = *y;
    *y = temp;
}
