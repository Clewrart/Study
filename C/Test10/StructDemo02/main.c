#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char num[10];
    char name[10];
    char gender;
    int score[4];
    float aver;

}STU;

int main()
{
    STU x, *p = &x;
    printf("������һ��ѧ������Ϣ(ѧ�š��������Ա����ſγɼ�):\n");
    scanf("%s %s %c %d %d %d %d",x.num,x.name,&x.gender,&x.score[0],&x.score[1],&x.score[2],&x.score[3]);
    p->aver = (p->score[0]+p->score[1]+p->score[2]+p->score[3])/4.0;
    printf("\n��ѧ����ƽ���ɼ�:%.1f\n",(*p).aver);

    return 0;
}
