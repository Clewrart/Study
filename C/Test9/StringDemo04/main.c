#include <stdio.h>
#include <stdlib.h>

int mystrlen(const char *p);

int main()
{
    char s[50];
    printf("������һ���ַ�����");
    gets(s);
    printf("������ַ����ǣ�%s\n", s);

    int n = mystrlen(s);
    printf("���ַ�������Ϊ��%d\n", n);

    return 0;
}

int mystrlen(const char *p)

{
    int sslen = strlen(p);

    return sslen;
}

