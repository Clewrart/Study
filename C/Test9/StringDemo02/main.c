#include <stdio.h>
#include <stdlib.h>
void reverse(char *p);
int main()
{
    char s[50];
    printf("������һ���ַ�����");
    gets(s);
    printf("������ַ����ǣ�%s\n", s);
    reverse(s);
    printf("���ַ��������%s\n", s);
    return 0;
}

void reverse(char *p)
{
    int len = strlen(p);//����
    int i;
    int n = len / 2;
    char cache1;//�����ݴ�
    for (i = 0; i <= n; i++)
    {
        cache1 = p[i];
        p[i] = p[len - 1 - i];
        p[len - 1 - i] = cache1;
    }
    return p;
}
