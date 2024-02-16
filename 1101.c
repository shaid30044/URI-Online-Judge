#include <stdio.h>

int main()
{
    int M, N, big, small, i, sum = 0;

    for (;;)
    {
        scanf("%d %d", &M, &N);

        if (M <= 0 || N <= 0)
        {
            break;
        }

        big = M;
        small = N;

        if (big < N)
        {
            big = N;
            small = M;
        }

        for (i = small; i <= big; i++)
        {
            printf("%d ", i);

            sum += i;
        }
        printf("Sum=%d\n", sum);

        sum = 0;
    }

    return 0;
}