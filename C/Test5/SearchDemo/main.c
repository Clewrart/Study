#include <stdio.h>
#include <stdlib.h>

#define N 10

// ������ԭ������
int my_linear_search(int* arr, int n, int key);
int my_binary_search(int* arr, int n, int key);

int main()
{
    int scores[N] = { 57, 62, 67, 73, 76, 79, 81, 85, 90, 93 };
    int key = 90;
    int pos;

    printf("ʹ�����Բ����㷨������Ԫ��%d��", key);
    pos = my_linear_search(scores, N, key);
    printf("λ��%d��\n", pos);

    printf("ʹ�ö��ֲ����㷨������Ԫ��%d��", key);
    pos = my_binary_search(scores, N, key);
    printf("λ��%d��\n", pos);


    key = 89;
    printf("ʹ�����Բ����㷨������Ԫ��%d��", key);
    pos = my_linear_search(scores, N, key);
    printf("λ��%d��\n", pos);

    printf("ʹ�ö��ֲ����㷨������Ԫ��%d��", key);
    pos = my_binary_search(scores, N, key);
    printf("λ��%d��\n", pos);
    return 0;
}

/**
 * ʵ�����Բ����㷨
 */
int my_linear_search(int* arr, int n, int key)
{
    int index = -1;
    int l = 0;
    int h = n-1;
    for (int i = 0; i < n; i++)
        {
            if (arr[i]==key)
            {
                index = i;
            }
        }

    return index;


}

/**
 * ʵ�ֶ��ֲ����㷨
 */
int my_binary_search(int* arr, int n, int key)
{
    int index = -1;
      int l2 = 0;
    int m2;
    int h2 = n-1;
    while(l2 <= h2)
    {
        m2 = (l2+h2)/2;
        if(arr[m2] == key){
            index = m2;
            break;
        }
        else if(key > arr[m2]){
            l2 = m2+1;

        }
        else if(key < arr[m2]){
            h2 = m2-1;

        }
    }

    return index;
}
