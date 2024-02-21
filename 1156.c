#include <stdio.h>

int main()
{
    double i, j, S = 1.0;

    for (i = 3.0, j = 2.0; i <= 39; i += 2, j *= 2)
        S += i / j;

    printf("%.2lf\n", S);

    return 0;
}