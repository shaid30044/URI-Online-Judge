#include <stdio.h>

int main()
{
    int i, N;

    scanf("%d", &N);

    for (i = 1; i < N * 4; i += 4)
    {
        printf("%d %d %d PUM\n", i, i + 1, i + 2);
    }

    return 0;
}