#include <stdio.h>
#include <math.h>

#define ROWS 3
#define COLS 5

void array2d_print(int (*p)[COLS], int n);
float avg_student(int (*p)[COLS], int n);
float avg_course(int (*p)[COLS], int n);
float variance(int (*p)[COLS], int n, float avg_all);

int main()
{
    int mat[ROWS][COLS] = {
        { 73, 86, 85, 76, 88 },
        { 92, 66, 94, 75, 83 },
        { 80, 74, 68, 70, 81 }
    };

    printf("3λѧ��5�ſγ̳ɼ���\n");
    array2d_print(mat, ROWS);

    // ����ÿ��ѧ����ƽ����
    for (int i = 0; i < ROWS; i++) {
        float avg = avg_student(mat, i);
        printf("ѧ��%d��ƽ���֣�%.2f\n", i + 1, avg);
    }

    // ����ÿ�ſγ̵�ƽ����
    for (int j = 0; j < COLS; j++) {
        float avg = avg_course(mat, j);
        printf("�γ�%d��ƽ���֣�%.2f\n", j + 1, avg);
    }

    // ����ƽ���ַ���
    float avg_all = avg_student(mat, ROWS);
    float var = variance(mat, ROWS, avg_all);
    printf("ƽ���ַ��%.2f\n", var);

    return 0;
}

void array2d_print(int (*p)[COLS], int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            printf("%d ", p[r][c]);
        }
        printf("\n");
    }
}

float avg_student(int (*p)[COLS], int n)
{
    int sum = 0;
    for (int c = 0; c < COLS; c++)
    {
        sum += p[n][c];
    }
    float avg = (float)sum / COLS;
    return avg;
}

float avg_course(int (*p)[COLS], int n)
{
    int sum = 0;
    for (int r = 0; r < ROWS; r++)
    {
        sum += p[r][n];
    }
    float avg = (float)sum / ROWS;
    return avg;
}

float variance(int (*p)[COLS], int n, float avg_all)
{
    float sum = 0;
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
            sum += pow(p[r][c] - avg_all, 2);
        }
    }
    float var = sum / (n * COLS);
    return var;
}
