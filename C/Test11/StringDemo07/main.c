#include <stdio.h>
#include <stdlib.h>
#define N 100
char *reverse(const char *s);
int main()
{
    char p[N];
    printf("�������ַ�����\n");
    scanf("%s", p);
    char *s = p;
    char *ps=reverse(s);
    printf("ԭʼ�����ַ���Ϊ:%s\n",s);
    printf("�������ַ���Ϊ:%s",ps);
    return 0;
}

char *reverse(const char *s)
{
    const int n=strlen(s);
    char *ps;
    *ps = malloc((n+1)*sizeof(char));
    int i;
    for(i=0;i<n;i++)
    {
        ps[i]=s[n-1-i];
    }
    ps[i]='\0';
    return ps;
    free(p);
    free(ps);
}

