#include <stdio.h>

int main()
{
    int x, alc = 0, gsl = 0, dsl = 0;

    for (;;)
    {
        scanf("%d", &x);

        if (x == 1)
        {
            alc++;
        }
        if (x == 2)
        {
            gsl++;
        }
        if (x == 3)
        {
            dsl++;
        }
        if (x == 4)
        {
            break;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alc);
    printf("Gasolina: %d\n", gsl);
    printf("Diesel: %d\n", dsl);

    return 0;
}