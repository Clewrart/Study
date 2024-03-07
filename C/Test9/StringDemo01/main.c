#include <stdio.h>
#include <stdlib.h>
#define N 50

int front_star_number(const char *p);

int back_star_number(const char *p);

int main()
{
    char s[50];
    printf("������һ���ַ�����");
    gets(s);
    printf("������ַ����ǣ�%s\n", s);

    int n = front_star_number(s);
    printf("���ַ���ǰ�Ǻ���Ŀ��%d\n", n);

    int m = back_star_number(s);
    printf("���ַ������Ǻ���Ŀ��%d\n", m);

    return 0;
}

int front_star_number(const char *p)
{
    int n=0;
   while (*p == '*')
    {
        p++;
        n++;
    }

    return n;
}

int back_star_number(const char *p)
{
    int m=0;
    while (*p != '\0')
    {
        p++;
    }
    p--;

    while (*p == '*')
    {
        p--;
        m++;
    }

    return m;
}
