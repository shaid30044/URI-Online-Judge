#include <stdio.h>

int main()
{
    int i, age, sum = 0, count = 0;
    double avg;

    scanf("%d", &age);

    for (;;)
    {
        if (age >= 0)
        {
            count++;
            sum += age;

            scanf("%d", &age);
        }
        else
            break;
    }

    avg = sum * 1.00 / count;

    printf("%.2lf\n", avg);

    return 0;
}