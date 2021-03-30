#include <stdio.h>

int main()

{
    int number,i,X,Y,sum = 0;
    scanf("%d",&number);
    for(i=1; i<=number; i++)
    {
        scanf("%d%d",&X,&Y);
        if(X>Y)
        {
            X--;
            while(X>Y)
            {
                if(X%2==1)
                {
                    sum +=X;
                }
                X--;
            }
            printf("%d\n",sum);
        }
        else
        {
            Y--;
            while(Y>X)
            {
                if(Y%2==1)
                {
                    sum +=Y;
                }
                Y--;
            }
            printf("%d\n",sum);
        }
        sum = 0;
    }


    return 0;
}
