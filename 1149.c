#include <stdio.h>

int main()
{
    int i, A, N, sum = 0;

    scanf("%d %d", &A, &N);

    for (; N <= 0;)
        scanf("%d", &N);

    for (i = A; i < A + N; i++)
        sum += i;

    printf("%d\n", sum);

    return 0;
}