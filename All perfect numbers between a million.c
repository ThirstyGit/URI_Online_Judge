#include <stdio.h>

int main()
{
    int X = 1000000,sum,i;
    while(X>=0)
    {
        sum = 0;
        for(i=1; i<X; i++)
        {
            if(X%i==0)
            {
                sum+=i;
            }
        }
        if(sum == X)
        {
            printf("%d\n",X);
        }
        X++;
    }


    return 0;
}
