#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int year;  // �����û�������ݵ����α���
    bool isLeapYear = true;  // �б��û���������Ƿ�������Ĳ������ͱ���

    printf("������һ����ݣ�\n");
    scanf("%d", &year);

    if((year % 100 != 0)&&(year % 4 == 0) || (year % 400 == 0)) //����һ��+���겻���İ�����
    {
        isLeapYear = 1;//������=1��������=0
    }
    else
    {
        isLeapYear = 0;
    }

    if (isLeapYear)
    {
        printf("%d�����꣡\n", year);
    }
    else
    {
        printf("%d�������꣡\n", year);
    }

    return 0;
}
