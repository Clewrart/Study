#include <stdio.h>
#include <stdlib.h>
void find_longest(char str[]);
int main()
{
    char s[50];
    printf("������һ���ַ�����");
    gets(s);
    printf("������ַ����ǣ�%s\n", s);
    void findLongest(char str[]);
    findLongest(s);
    return 0;
}

void findLongest(char str[])
{
    int len1=0;//���ĵ��ʳ���
    int lenm=0;//��鵽�ĵ��������
    int start1=0;//�ִʵ���
    int MaxWord=0;//�����

    int i=0;
    int j=0;

    for(i=0;str[i];i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        {
            if(len1==0)//��ǰ���ȵ���0ʱ��������
                start1=i;//�µ��ʵĿ�ʼλ��
            len1++;
        }
        if(len1>lenm)//dangqian���ʵĳ��ȴ������ֵ
        {
            lenm = len1;
            MaxWord = start1;
        }
        if(str[i]==' ')//�����ո����
        {
            len1 = 0;
        }
    }

    printf("�����");
     for(j=MaxWord;j <MaxWord+lenm;j++)
    {
        char uu =str[j];
        printf("%c",uu);

    }
    printf("\n�������ĸ�� %d",lenm);
}


