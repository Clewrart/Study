#ifndef NODE_H
#define NODE_H

typedef struct node
{
    int data;
    struct node *next;
} NODE;

// ��������
NODE* createList(int* a, int n);

// �������Ԫ��
void outputList(NODE* head);

// ɾ������
void deleteList(NODE* head);

// ��ӽ��
void insertNode(NODE* head, int data);

// ɾ�����
void deleteNode(NODE* head, int data);

#endif // NODE_H
