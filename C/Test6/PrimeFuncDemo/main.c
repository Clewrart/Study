#include <stdio.h>
#include <stdlib.h>
int prime(int x);
int main()
{
    int x,i,j;
    printf("������һ�����ڵ���6��ż����");
    scanf("%d",&x);
    if( x>=6 && x%2==0 )
    {
        for(i=2;i<x;i++)
        {
            if(prime(i)==1)
            {
                j=x-i;
                if(prime(j)==1)
                    {
                    printf("%d=%d+%d\n",x,i,j);
                    }
            }
        }
    }
    else
    {
         printf("�������ֵ��\n");
    }
    return 0;

}

int prime(int x)
{
    int i,flag;
    if(x>=2)
    {
        flag=1;
        for(i=2;i<x;i++)
        {
            if(x %i==0)
            {
                flag=0;
                break;
            }

        }
         return (flag);
    }
    else
    {
        return 0;
    }

}

