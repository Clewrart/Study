#include <stdio.h>
#include <stdlib.h>
int fact(int n);
int main()
{
    int x,C;
    printf("������һ����������");
    scanf("%d",&x);
    C=fact(x);
    printf("%d!=%d",x,C);
    return 0;
}
int fact(int n)
{
    if(n>1)
    {
        return (n*fact(n-1));
    }
    else
        return(1);

}
