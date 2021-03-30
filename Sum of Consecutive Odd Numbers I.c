#include <stdio.h>

int main()

{
    int X,Y,i,sum = 0;
    scanf("%d%d",&X,&Y);
    if(X>Y)
    {
        for(i=Y+1; i<X; i=i+1)
        {
            if(i % 2 == 1 || i % 2 == -1)
            {
                sum = sum + i;
            }
        }
    }
    else
    {
        for(i=X+1; i<Y; i=i-1)
        {
            if(i % 2 == 1 || i % 2 == -1)
            {
                sum = sum + i;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}

/*
{
    int X,Y,i,sum = 0;
    scanf("%d%d",&X,&Y);


    for(i=Y+1; i<X; i=i+1)
    {
        if(i % 2 == 1 || i % 2 == -1)
        {
            sum = sum + i;
        }
    }
    printf("%d\n",sum);
}
*/
