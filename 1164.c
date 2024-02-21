#include <stdio.h>

int main()
{
    int n, x, sum;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);

        sum = 0;

        if (x == 1)
        {
            printf("%d nao eh perfeito\n", x);
        }
        else
        {
            for (int i = 1; i <= x; i++)
            {
                sum += i;

                if (sum == x)
                {
                    printf("%d eh perfeito\n", x);
                    break;
                }
                else if (sum > x)
                {
                    printf("%d nao eh perfeito\n", x);
                    break;
                }
            }
        }
    }

    return 0;
}