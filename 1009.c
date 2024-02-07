#include <stdio.h>

int main()
{
    char name[100];
    double a, b, total;

    scanf("%s %lf %lf", &name, &a, &b);

    total = a + (b * .15);

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}