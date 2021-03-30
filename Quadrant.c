#include <stdio.h>

int main()

{
    int X,Y,flag = 0;
    while(flag!=1)
    {
        scanf("%d%d",&X,&Y);
        if(X>0)
        {
            if(Y>0)
            {
                printf("primeiro\n");
            }
            else if(Y<0)
            {
                printf("quarto\n");
            }
            else
            {
                flag = 1;
            }
        }
        else if(X<0)
        {
            if(Y>0)
            {
                printf("segundo\n");
            }
            else if(Y<0)
            {
                printf("terceiro\n");
            }
            else
            {
                flag = 1;
            }
        }
        else
        {
            flag = 1;
        }
    }


    return 0;
}
