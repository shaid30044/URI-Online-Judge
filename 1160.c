#include <stdio.h>

int main()
{
    int t, pa, pb, anos, count;
    double g1, g2;

    scanf("%d", &t);

    for (int i = 1; i <= t; i++)
    {
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);

        anos = 0;
        count = 0;

        for (; pa <= pb;)
        {
            pa += pa * g1 * 0.01;
            pb += pb * g2 * 0.01;
            anos++;

            if (anos > 100)
            {
                count++;
                break;
            }
        }
        count > 0 ? printf("Mais de 1 seculo.\n")
                  : printf("%d anos.\n", anos);
    }

    return 0;
}