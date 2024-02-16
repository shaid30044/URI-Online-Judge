#include <stdio.h>

int main()
{
    double num, count = 0, sum = 0, avg;

    for (;;)
    {
        if (count == 2)
            break;

        scanf("%lf", &num);

        if (num >= 0 && num <= 10)
        {
            count++;
            sum += num;
        }
        else
        {
            printf("nota invalida\n");
        }
    }

    avg = sum / 2.0;
    printf("media = %.2lf\n", avg);

    return 0;
}