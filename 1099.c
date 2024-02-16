#include <stdio.h>

int main()
{
    int N, X, Y, big, small, i, j, sum = 0;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        scanf("%d %d", &X, &Y);

        big = X;
        small = Y;

        if (big < Y)
        {
            big = Y;
            small = X;
        }

        for (j = small + 1; j < big; j++)
        {
            if (j % 2 != 0)
            {
                sum += j;
            }
        }

        printf("%d\n", sum);

        sum = 0;
    }

    return 0;
}