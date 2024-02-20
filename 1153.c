#include <stdio.h>

int main()
{
    int i, N, fac = 1;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        fac *= i;
    }

    printf("%d\n", fac);

    return 0;
}