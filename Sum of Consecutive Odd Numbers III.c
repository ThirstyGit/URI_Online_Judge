#include <stdio.h>

int main()

{
    int sum,X,Y,N;
    scanf("%d",&N);
    while(N != 0)
    {
        scanf("%d%d",&X,&Y);
        if(X%2 == 1)
        {
            sum = 0;
            while(Y != 0)
            {
                sum += X;
                X+=2;
                Y--;
            }
            printf("%d\n",sum);
        }
        else
        {
            X++;
            sum = 0;
            while(Y != 0)
            {
                sum += X;
                X+=2;
                Y--;
            }
            printf("%d\n",sum);
        }
        N--;
    }


    return 0;
}
