//��������
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b;
    double c; //�̴���С��

    printf("��������������,�ո���ֿ���");

    scanf("%d %d",&a,&b);

    printf("�� %d\n",a + b);

    printf("�� %d\n",a - b);

    printf("�� %d\n",a * b);


    if (b == 0)//��������Ϊ0
    {
        printf("����0�޷������̣�����");
    }

    else
    {
        c =1.0 * a / b;

        printf("�� %f\n",c);

    }
    return 0;

}
