#include <stdio.h>

int main()

{
    int loop1,loop2,N = 1,temp;
    while(N!= 0)
    {
        scanf("%d",&N);
        if(N == 0)
        {
            break;
        }
        else if(N%2 != 0)
        {
            for(loop1 = 1; loop1<=N/2 + 1; loop1++)
            {
                temp = 1;
                for(loop2 = 1; loop2<=N/2 + 1; loop2++)
                {
                    if(loop2 == 1)
                    {
                        printf("%3d",temp);
                    }
                    else
                    {
                        printf(" %3d",temp);
                    }
                    if(temp < loop1)
                    {
                        temp ++;
                    }
                }
                for(loop2 = N/2 + 2; loop2<=N; loop2++)
                {
                    if(N - loop2 + 1<temp)
                    {
                        temp--;
                    }
                    printf(" %3d",temp);
                }
                printf("\n");
            }
            for(loop1 = N/2 + 2; loop1<=N; loop1++)
            {
                temp = 1;
                for(loop2 = 1; loop2<=N/2 + 1; loop2++)
                {
                    if(loop2 == 1)
                    {
                        printf("%3d",temp);
                    }
                    else
                    {
                        printf(" %3d",temp);
                    }
                    if(temp<=N - loop1)
                    {
                        temp++;
                    }
                }
                for(loop2 = N/2 + 2; loop2<=N; loop2++)
                {
                    if(temp >= N - loop2 + 2)
                    {
                        temp--;
                    }
                    printf(" %3d",temp);
                }
                printf("\n");
            }
            printf("\n");
        }
        else
        {
            for(loop1 = 1; loop1<=N/2; loop1++)
            {
                temp = 1;
                for(loop2 = 1; loop2<=N/2; loop2++)
                {
                    if(loop2 == 1)
                    {
                        printf("%3d",temp);
                    }
                    else
                    {
                        printf(" %3d",temp);
                    }
                    if(temp < loop1)
                    {
                        temp ++;
                    }
                }
                for(loop2 = N/2 + 1; loop2<=N; loop2++)
                {
                    if(N - loop2 + 1<temp)
                    {
                        temp--;
                    }
                    printf(" %3d",temp);
                }
                printf("\n");
            }
            for(loop1 = N/2 + 1; loop1<=N; loop1++)
            {
                temp = 1;
                for(loop2 = 1; loop2<=N/2; loop2++)
                {
                    if(loop2 == 1)
                    {
                        printf("%3d",temp);
                    }
                    else
                    {
                        printf(" %3d",temp);
                    }
                    if(temp<=N - loop1)
                    {
                        temp++;
                    }
                }
                for(loop2 = N/2 + 1; loop2<=N; loop2++)
                {
                    if(temp >= N - loop2 + 2)
                    {
                        temp--;
                    }
                    printf(" %3d",temp);
                }
                printf("\n");
            }
            printf("\n");
        }
    }


    return 0;
}
