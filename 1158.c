#include <stdio.h>

int main()
{
    int i, j, N, X, Y, sum;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        scanf("%d %d", &X, &Y);

        X % 2 == 0 ? X += 1 : X;
        sum = 0;

        for (j = 1; j <= Y; j++)
        {
            sum += X;
            X += 2;
        }
        printf("%d\n", sum);
    }

    return 0;
}