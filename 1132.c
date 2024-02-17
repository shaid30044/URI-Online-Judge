#include <stdio.h>

int main()
{
    int X, Y, i, sum = 0, big, small;

    scanf("%d %d", &X, &Y);

    big = X;
    small = Y;

    if (big < Y)
    {
        big = Y;
        small = X;
    }

    for (i = small; i <= big; i++)
    {
        if (i % 13 != 0)
        {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}