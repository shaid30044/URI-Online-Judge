#include <stdio.h>

int main()
{
    int X, Y, i, big, small;

    scanf("%d %d", &X, &Y);

    big = X;
    small = Y;

    if (big < Y)
    {
        big = Y;
        small = X;
    }

    for (i = small + 1; i < big; i++)
    {
        if (i % 5 == 2 || i % 5 == 3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}