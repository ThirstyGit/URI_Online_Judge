#include <stdio.h>

int main()

{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
        printf("%d ",i*i);
        printf("%d\n",i*i*i);
        printf("%d ",i);
        printf("%d ",i*i+1);
        printf("%d\n",i*i*i+1);
    }


    return 0;
}
