#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "dotcom.h"
int main()
{
    bool isAlive = true;

    int guess;
    bool guessed[7] = {false};

    Status result = MISS;
    DotCom dotcom;

    init_dotom(&dotcom);
    int gue = 0;


    while (isAlive)
    {
        printf("������һ��������0-6֮�䣩��");
        scanf("%d", &guess);
        if (guessed[guess])
        {
            printf("��Ч�²⣡��������Ѿ��¹���\n");
            continue;
        }
        if (guess < 0 || guess > 6)
        {
            continue;
        }
        result = check_user_guess(&dotcom, guess);
        switch (result)
        {
        case MISS:
            printf("MISS\n");
            break;
        case HIT:
            printf("HIT\n");
            break;
        case DUNK:
            printf("DUNK\n");
            isAlive = false;
            break;
        default:
            break;
        }
        gue++;
        printf("�û��²��ܴ�����%d\n", gue);
        guessed[guess] = true;

    }
    return 0;
}
