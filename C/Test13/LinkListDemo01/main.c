#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;  // ����
    struct Node *next; // ָ����һ������ָ��
};

typedef struct Node NODE;

// ��������
NODE *createList(int *a, int n);

// ����б�Ԫ��
void outputList(NODE *head);

// ɾ������
void deleteList(NODE *head);

// ��ӽ��
void insertNode(NODE *head, int x);

// ɾ�����
void deleteNode(NODE *head, int x);

int main()
{
    int a[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90}, i;
    NODE *head;
    printf("�����ֵ��");
    for(i = 0; i < 9; i++)
    {
        printf("%d\t",a[i]);
    }
    head = createList(a, 9);
    printf("\n������Ԫ�ش����Ķ�̬����\n");
    outputList(head);
    printf("\n");

    //����ڵ�
    insertNode(head, 55);
    outputList(head);
    printf("\n");

    //ɾ���ڵ�
    deleteNode(head, 55);
    outputList(head);
    printf("\n");

    //ɾ����
    deleteList(head);
    outputList(head);
    printf("\n");

    return 0;
}

NODE *createList(int *a, int n)
{
    int i;
    NODE *head, *p, *new_node;
    head = (NODE *)malloc(sizeof(NODE));
    p = head;
    for(i = 0; i < n; i++)
    {
        new_node = (NODE *)malloc(sizeof(NODE));
        new_node->data = a[i];
        new_node->next = NULL;
        p->next = new_node;
        p = p->next;
    }
    return head;

}

// ����б�Ԫ��
void outputList(NODE *head)
{
    NODE *p;
    p = head->next;
    while(p != NULL)
    {
        printf("%d-> ", p->data);
        p = p->next;
    }
    printf("NULL");

}

//ɾ������
void deleteList(NODE *head)
{
    NODE *p1 = head;
    NODE *p2 = head->next;
    while(p1 != NULL)
    {
        free(p1);

        p1 = p2;
        p2 = p2->next;
        if(p2 != NULL)
        {
            p2 = p2->next;
        }
    }

}

//������
void insertNode(NODE *head, int data)
{
    NODE *new_node = malloc(sizeof(NODE));
    new_node ->data = data;
    new_node ->next = NULL;
    NODE *p1 = head;
    NODE *p2 = head ->next;

    while (p2 != NULL)
    {
        if(p2->data < data)
        {
            p1 = p2;
            p2 = p2->next;

        }
        else
        {
            break;
        }
    }
    new_node ->next = p2;
    p1 ->next = new_node;

}

//ɾ�����
void deleteNode(NODE *head, int data)
{
    NODE *new_node = malloc(sizeof(NODE));
    new_node ->data = data;
    new_node ->next = NULL;
    NODE *p1 = head;
    NODE *p2 = head ->next;

    //������һ����data��Ľ��
    while (p2 != NULL)
    {
        if(p2->data != data)
        {
            p1 = p2;
            p2 = p2->next;

        }
        else
        {
            break;
        }
    }
    p1 ->next = p2 ->next;
    free(p2);
}

