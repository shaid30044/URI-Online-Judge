#include <stdio.h>

int main()
{
    int i, j, idx;

    for (i = 1; i < 20;)
    {
        for (j = 60; j >= 0; j -= 5)
        {
            printf("I=%d J=%d\n", i, j);

            i += 3;
        }
    }

    return 0;
}