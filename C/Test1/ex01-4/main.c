#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    printf("���������߳����ո�ָ�:");

    double a,b,c,H;

    scanf("%lf%lf%lf",&a,&b,&c);


    H = sqrt((a+b+c)/2 * ((a+b+c)/2-a) * ((a+b+c)/2-b) * ((a+b+c)/2-c));

    printf("�����%0.2f \nע�⣡���Ϊ0�������β����ڣ�",H);

    return 0;
}
