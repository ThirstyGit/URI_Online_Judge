#include <stdio.h>

int main()

{
    int N,i,num = 1;;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("%d ",num);
        num++;
        printf("%d ",num);
        num++;
        printf("%d PUM\n",num);
        num+=2;

    }


    return 0;
}
