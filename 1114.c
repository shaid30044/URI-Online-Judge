#include <stdio.h>

int main()
{
    int pass;

    for (;;)
    {
        scanf("%d", &pass);

        if (pass != 2002)
        {
            printf("Senha Invalida\n");
        }
        else
        {
            printf("Acesso Permitido\n");
            break;
        }
    }

    return 0;
}