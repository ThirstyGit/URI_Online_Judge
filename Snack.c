#include <stdio.h>

int main()

{
    int X,Y;
    scanf("%d%d",&X,&Y);
    if(X==1)
    {
        printf("Total: R$ %.2f\n",Y*4.0);
    }
    else if(X==2)
    {
        printf("Total: R$ %.2f\n",Y*4.5);
    }
    else if(X==3)
    {
        printf("Total: R$ %.2f\n",Y*5.0);
    }
    else if(X==4)
    {
        printf("Total: R$ %.2f\n",Y*2.0);
    }
    else if(X==5)
    {
        printf("Total: R$ %.2f\n",Y*1.5);
    }

    return 0;
}
