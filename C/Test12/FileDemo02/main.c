#include <stdio.h>
#include <stdlib.h>

#define N 7

int main()
{
    char *weekdays[N];

    FILE *fp=fopen("D:/01��������/2023-2024-01-C����-������/ʵ��12/ʵ��12/FileDemo01/weekdays.txt","r");


    if(fp!=NULL)
        {
            while(fgets(weekdays,N,fp))
            {
                printf("%s",weekdays);
            }
        }
    fclose(fp);

    return 0;
}
