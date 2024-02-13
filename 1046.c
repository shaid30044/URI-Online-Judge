#include <stdio.h>

int main()
{
    int startTime, endTime, duration;

    scanf("%d %d", &startTime, &endTime);

    if (startTime > endTime)
    {
        duration = 24 - (startTime - endTime);
    }
    else if (startTime == endTime)
    {
        duration = 24;
    }
    else
    {
        duration = endTime - startTime;
    }

    printf("O JOGO DUROU %d HORA(S)\n", duration);

    return 0;
}