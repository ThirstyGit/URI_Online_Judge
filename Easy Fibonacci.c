#include <stdio.h>

int main()

{
    int X = 0,Y = 1,temp,N;
    scanf("%d",&N);
    if(N>1)
    {
        printf("%d ",X);
    }
    else if(N == 1)
    {
        printf("%d\n",X);
    }
    while(N > 2)
    {
        N--;
        printf("%d ",Y);
        temp = Y;
        Y+= X;
        X = temp;
    }
    while(N == 2)
    {
        printf("%d\n",Y);
        N--;
    }

    return 0;
}
