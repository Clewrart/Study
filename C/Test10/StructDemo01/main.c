#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int year,month,day;
}DATE;

typedef struct
{
    char num[10],name[10],gender;
    DATE birthday;
    int score[4];
}STU;
int main()
{
    STU x={"151101","����",'M',{2004,06,18},{82,81,75,86}};
    printf("ѧ�ţ�%s\n",x.num);
    printf("������%s\n",x.name);
    printf("�Ա�%c\n",x.gender);
    printf("�������ڣ�%d - %d - %d\n",x.birthday.year,x.birthday.month,x.birthday.day);
    printf("������%d, Ӣ�%d, ���Σ�%d, C���ԣ�%d",x.score[0],x.score[1],x.score[2],x.score[3]);
    return 0;
}

