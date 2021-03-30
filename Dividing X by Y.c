#include <stdio.h>

int main()

{
    int N,i;
    float X,Y;
    scanf("%d",&N);
    for(i=1; i<=N;i++)
    {
        scanf("%f%f",&X,&Y);
        if(Y !=0)
        {
            printf("%.1f\n",X/Y);
        }
        else
        {
            printf("divisao impossivel\n");
        }
    }


    return 0;
}
