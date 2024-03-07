#include <stdio.h>
#include <stdlib.h>

#define ROWS 3
#define COLS 4

void print1(int *p, int n);
void print2(int (*p)[COLS], int n);

int main()
{
    int mat[ROWS][COLS] = {
        { 73, 86, 85, 76 },
        { 92, 66, 94, 75 },
        { 80, 74, 68, 70 }
    };

    printf("����1��ͨ��ָ���������ʶ�ά����\n");
    int *pm1[ROWS];
    pm1[0] = mat[0];
    pm1[1] = mat[1];
    pm1[2] = mat[2];

    for (int i = 0; i < ROWS; i++)
    {
        print1(pm1[i], COLS);
    }


    printf("����2��ͨ�������ָ����ʶ�ά����\n");
    print2(mat, ROWS);


    return 0;
}

void print1(int *p, int n)
{
    int i;
    for( i=0;i<COLS;i++ )
        {
            printf("%d", p[i]);
        }

        printf("\n");

    return 0;
}

void print2(int (*p)[COLS], int n)
{

    n = COLS;
    for(int i=0;i<3;i++)
    {
        for(int j = 0;j<4;j++)
        {
            printf("%d",p[i][j]);

        }
        printf("\n");
    }

    return 0;
}


