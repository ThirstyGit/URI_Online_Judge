//WRONG ANSWER!!

#include <stdio.h>
#include <math.h>

int main()

{
    int loop1,loop2,N;
    while(1)
    {
        if(scanf("%d",&N) == EOF)
        {
            break;
        }
        else if(N % 2 != 1)
        {
            for(loop1 = 0; loop1<round(N/4.0); loop1++)
            {
                for(loop2 = 0; loop2<N; loop2++)
                {
                    if(loop1 == loop2)
                    {
                        printf("%d",2);
                    }
                    else if(N - loop1 - 1 == loop2)
                    {
                        printf("%d",3);
                    }
                    else
                    {
                        printf("%d",0);
                    }
                }
                printf("\n");
            }
            for(loop1 = 1; loop1<floor(N/4.0); loop1++)
            {
                for(loop2 = 0; loop2<N; loop2++)
                {
                    if(round(N/4.0) <= loop2 && N - round(N/4.0) > loop2)
                    {
                        printf("%d",1);
                    }
                    else
                    {
                        printf("%d",0);
                    }
                }
                printf("\n");
            }
            for(loop1 = 0; loop1<N; loop1++)
            {
                if(loop1 == N/2 - 1)
                {
                    printf("%d",4);
                }
                else if(round(N/4.0) <= loop1 && N - round(N/4.0) > loop1)
                {
                    printf("%d",1);
                }
                else
                {
                    printf("%d",0);
                }
            }
            printf("\n");
            for(loop1 = 0; loop1<floor(N/4.0); loop1++)
            {
                for(loop2 = 0; loop2<N; loop2++)
                {
                    if(round(N/4.0) <= loop2 && N - round(N/4.0) > loop2)
                    {
                        printf("%d",1);
                    }
                    else
                    {
                        printf("%d",0);
                    }
                }
                printf("\n");
            }
            for(loop1 = 0; loop1<round(N/4.0); loop1++)
            {
                for(loop2 = 0; loop2<N; loop2++)
                {
                    if(N - round(N/4.0) + loop1 == loop2)
                    {
                        printf("%d",2);
                    }
                    else if(round(N/4.0) - loop1 - 1 == loop2)
                    {
                        printf("%d",3);
                    }
                    else
                    {
                        printf("%d",0);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
        else
        {
                for(loop1 = 0; loop1<=round(N/6.0); loop1++)
                {
                    for(loop2 = 0; loop2<N; loop2++)
                    {
                        if(loop1 == loop2)
                        {
                            printf("%d",2);
                        }
                        else if(N - loop1 - 1 == loop2)
                        {
                            printf("%d",3);
                        }
                        else
                        {
                            printf("%d",0);
                        }
                    }
                    printf("\n");
                }
                for(loop1 = 0; loop1<floor(N/6.0); loop1++)
                {
                    for(loop2 = 0; loop2<N; loop2++)
                    {
                        if(round(N/4.0) <= loop2 && N - round(N/4.0) > loop2)
                        {
                            printf("%d",1);
                        }
                        else
                        {
                            printf("%d",0);
                        }
                    }
                    printf("\n");
                }
                for(loop1 = 0; loop1<N; loop1++)
                {
                    if(loop1 == N/2)
                    {
                        printf("%d",4);
                    }
                    else if(round(N/4.0) <= loop1 && N - round(N/4.0) > loop1)
                    {
                        printf("%d",1);
                    }
                    else
                    {
                        printf("%d",0);
                    }
                }
                printf("\n");
                for(loop1 = 0; loop1<floor(N/6.0); loop1++)
                {
                    for(loop2 = 0; loop2<N; loop2++)
                    {
                        if(round(N/4.0) <= loop2 && N - round(N/4.0) > loop2)
                        {
                            printf("%d",1);
                        }
                        else
                        {
                            printf("%d",0);
                        }
                    }
                    printf("\n");
                }
                for(loop1 = 0; loop1<=round(N/6.0); loop1++)
                {
                    for(loop2 = 0; loop2<N; loop2++)
                    {
                        if(N - round(N/4.0) + loop1 == loop2)
                        {
                            printf("%d",2);
                        }
                        else if(round(N/4.0) - loop1 - 1 == loop2)
                        {
                            printf("%d",3);
                        }
                        else
                        {
                            printf("%d",0);
                        }
                    }
                    printf("\n");
                }
                printf("\n");
        }

    }


    return 0;
}
