#include <stdio.h>

int main()
{
    double salary;

    scanf("%lf", &salary);

    if (salary <= 2000.00)
    {
        printf("Isento\n");
    }
    else if (salary >= 2000.01 && salary <= 3000.00)
    {
        printf("R$ %.2lf\n", ((salary - 2000.00) * 0.08));
    }
    else if (salary >= 3000.01 && salary <= 4500.00)
    {
        printf("R$ %.2lf\n", ((salary - 3000.00) * 0.18) + (1000.00 * 0.08));
    }
    else if (salary >= 4500.01)
    {
        printf("R$ %.2lf\n", ((salary - 4500.00) * 0.28) + (1000.00 * 0.08) + (1500.00 * 0.18));
    }

    return 0;
}