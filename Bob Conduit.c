#include <stdio.h>

int main()

{
    int T,r1,r2;//r means radius. T means Test cases.
    scanf("%d",&T);
    while(T!= 0)
    {
        T--;
        scanf("%d%d",&r1,&r2);
        printf("%d\n",r1+r2);
    }


    return 0;
}
