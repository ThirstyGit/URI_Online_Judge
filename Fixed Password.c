#include <stdio.h>

int main()

{
    int password,flag = 0;
    while(flag == 0)
    {
        scanf("%d",&password);
        if(password == 2002)
        {
            printf("Acesso Permitido\n");
            flag = 1;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }


    return 0;
}
