#include <stdio.h>

int main()

{
    int loop1,loop2,temp,N = 1;
    while(N != 0)
    {
        scanf("%d",&N);
        if(N == 0)
        {
            break;
        }
        for(loop1 = 0; loop1<N; loop1++)
        {
            temp = loop1 + 1;
            for(loop2 = 0; loop2<loop1; loop2++)
            {
                if(loop2 == 0)
                {
                    printf("%3d",temp);
                }
                else
                {
                    printf(" %3d",temp);
                }
                temp--;
            }
            temp = 1;
            for(loop2 = loop1; loop2<N; loop2++)
            {
                if(loop2 == 0)
                {
                    printf("%3d",temp);
                }
                else
                {
                    printf(" %3d",temp);
                }
                temp++;
            }
            printf("\n");
        }
        printf("\n");
    }


    return 0;
}
