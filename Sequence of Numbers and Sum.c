#include <stdio.h>

int main()

{
    int X,Y,sum = 0;
    while(sum == 0)
    {
        scanf("%d%d",&X,&Y);
        if(X<=0 || Y<=0)
        {
            sum = 1;
            break;
        }
        else
        {
            if(X>Y)
            {
                while(Y<=X)
                {
                    printf("%d ",Y);
                    sum += Y;
                    Y++;
                }
                printf("Sum=%d\n",sum);
            }
            else
            {
                while(X<=Y)
                {
                    printf("%d ",X);
                    sum += X;
                    X++;
                }
                printf("Sum=%d\n",sum);
            }
        }
        sum = 0;
    }




    return 0;
}
