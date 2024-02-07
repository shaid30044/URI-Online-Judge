#include <stdio.h>

int main()
{
    int a, b, s, greater;

    scanf("%d %d %d", &a, &b, &s);

    greater = a;

    if (b > greater)
    {
        greater = b;
    }

    if (s > greater)
    {
        greater = s;
    }

    printf("%d eh o maior\n", greater);

    return 0;
}