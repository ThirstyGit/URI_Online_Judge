#include <stdio.h>

int main()

{
    int X,i;
    scanf("%d",&X);
    for(i=0;i<12;i=i+1)
    {
        if(X % 2 == 1)
        {
            printf("%d\n",X);
        }
        X = X+1;
    }


    return 0;
}
