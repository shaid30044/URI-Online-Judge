#include <stdio.h>

int main()
{
    int i, j, X, sum;

    for (;;)
    {
        scanf("%d", &X);

        if (X == 0)
            break;

        X % 2 != 0 ? X += 1 : X;
        sum = 0;

        for (i = 1; i <= 5; i++)
        {
            sum += X;
            X += 2;
        }
        printf("%d\n", sum);
    }

    return 0;
}