#include <stdio.h>

int main()

{
    int A,N,sum = 0;
    scanf("%d%d",&A,&N);
    while(N<=0)
    {
        scanf("%d",&N);
    }
    while(N!= 0)
    {
        sum += A;
        A++;
        N--;
    }
    printf("%d\n",sum);


    return 0;
}
