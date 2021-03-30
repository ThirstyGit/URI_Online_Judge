#include <stdio.h>

int main()

{
    int x,i;
    scanf("%d",&x);
    for(i=0;i<=x;i=i+1)
    {
        if(i%2==1)
        {
            printf("%d\n",i);
        }
    }


    return 0;
}
