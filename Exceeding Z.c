#include <stdio.h>

int main()

{
    int X,Z,num = 1;
    scanf("%d%d",&X,&Z);
    int sum = X;
    while(X>=Z)
    {
        scanf("%d",&Z);
    }
    while(sum<=Z)
    {
        sum += X+1;
        X++;
        num++;
    }
    printf("%d\n",num);


    return 0;
}
