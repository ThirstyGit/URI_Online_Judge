#include <stdio.h>

int main()

{
    int N,X,i;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%d",&X);
        if(X == 0)
        {
            printf("NULL");
        }
        else if(X % 2 == 0)
        {
            printf("EVEN ");
        }
        else
        {
            printf("ODD ");
        }
        if(X == 0)
        {
            printf("\n");
        }
        else if(X > 0)
        {
            printf("POSITIVE\n");
        }
        else
        {
            printf("NEGATIVE\n");
        }
    }


    return 0;
}
