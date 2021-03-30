#include <stdio.h>

int mainI()

{
    int X,Y,i,tom = 0;
    while(tom!=1)
    {
        scanf("%d%d",&X,&Y);
        if(X>Y)
        {
            printf("Decrescente\n");
        }
        else if(Y<X)
        {
            printf("Crescente\n");
        }
        else
        {
            tom = 1;
        }
    }


    return 0;
}
