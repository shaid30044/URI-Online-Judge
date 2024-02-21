#include <stdio.h>

int main()
{
    int x[10], idx, res;

    for (int i = 0; i < 10; i++)
        scanf("%d", &x[i]);

    for (int i = 0; i < 10; i++)
        x[i] <= 0 ? x[i] = 1 : 0;

    for (int i = 0; i < 10; i++)
        printf("X[%d] = %d\n", i, x[i]);

    return 0;
}