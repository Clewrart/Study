#include <stdio.h>
#include <stdlib.h>
#define N 10

typedef struct
{
    char num[10];
    int score;
}STU;

STU *find(STU *p) //����ֵ�ǽṹ��ָ�루�淶д����������ã�
{
    int i,max,n = 0;
    max = p[0].score;
    for(i = 0;i < N;i++)
    {
        if(p[i].score > max)
        {
            max = p[i].score;
            n = i;
        }
    }
    return &p[n];
}

int main()
{    STU x[N] = {{"GA001",85},{"GA002",76},{"GA003",72},{"GA004",69},{"GA005",88},{"GA006",66},{"GA007",99},{"GA008",77},{"GA009",65},{"GA010",91}};
    STU * top;
    top = find(x);
    printf("��߷�ѧ����\n");
    printf("ѧ�ţ�%s  �ɼ���%d\n",top->num,top->score);
    return 0;
}

