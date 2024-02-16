#include <stdio.h>

int main()
{
    int i, j, jIdx = 7;

    for (i = 1; i <= 9; i += 2)
    {
        for (j = jIdx; j >= jIdx - 2; j--)
        {
            printf("I=%d J=%d\n", i, j);
        }
        jIdx += 2;
    }

    return 0;
}