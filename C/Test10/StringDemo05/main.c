#include <stdio.h>
#include <stdlib.h>
void mystrcpy(char *s1, char *s2);
int main()
{
    char a[100];
    printf("������ԭʼ�ַ���(�ո�������س�ִ�У�:");
    scanf("%s",a);
	char b[100];

	mystrcpy(b,a);
	printf("���ƺ���ַ���Ϊ%s\n",b);
	return 0;
}
void mystrcpy(char *s1, char *s2)
{
    while(*s2 != '\0') {
            *s1 = *s2;
            *s1++;
            *s2++;
        }
        *s1 = '\0';
}
