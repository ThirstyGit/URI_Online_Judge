#include <stdio.h>

int main()

{
    int loop1,loop2,N;
    while(scanf("%d",&N) != EOF)
    {
        for(loop1 = 0; loop1<N; loop1++)
        {
            for(loop2 = 0; loop2<N; loop2++)
            {
                if(N - loop1 == loop2 + 1)
                {
                    printf("%d",2);
                }
                else if(loop1 == loop2)
                {
                    printf("%d",1);
                }
                else
                {
                    printf("%d",3);
                }
            }
            printf("\n");
        }
    }


    return 0;
}
