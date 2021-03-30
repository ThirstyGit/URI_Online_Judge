#include <stdio.h>

int main()

{
    int N,fact = 1;
    scanf("%d",&N);
    if(N == 0)
    {
        fact == 1;
    }
    else if(N>0)
    {
        while(N> 0)
        {
            fact*=N;
            N--;
        }
    }
    printf("%d\n",fact);


    return 0;
}
