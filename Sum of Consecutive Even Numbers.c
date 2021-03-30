#include <stdio.h>

int main()

{
    int X = 1,sum,i;
    while(X!= 0)
    {
        scanf("%d",&X);
        if(X != 0)
        {
            sum = 0;
            if(X%2 == 0)
            {
                for(i=1; i<=5; i++)
                {
                    sum+=X;
                    X+=2;
                }
                printf("%d\n",sum);
            }
            else
            {
                X++;
                for(i=1; i<=5; i++)
                {
                    sum+=X;
                    X+=2;
                }
                printf("%d\n",sum);
            }
        }

    }


    return 0;
}
