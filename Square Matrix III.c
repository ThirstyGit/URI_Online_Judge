#include <stdio.h>

int main()

{
    int kote1,kote2,kote3,temp,temp2,N,T;
    while(1)
    {
        scanf("%d",&N);
        if(N == 0)
        {
            break;
        }
        else
        {
            T = 0;
            temp = 1;
            for(kote1 = 1;kote1<=2*(N-1);kote1++)
            {
                temp *=2;
            }
            while(temp!=0)
            {
                T++;
                temp = temp/10;
            }
            temp = 1;
            for(kote1 = 0;kote1<N;kote1++)
            {
                for(kote2 = 0;kote2<N;kote2++)
                {
                    temp2 = temp;
                    for(kote3 = 0;temp2!=0;kote3++)
                    {
                        temp2 = temp2/10;
                    }
                    while(T - kote3 - 1 >= 0)
                    {
                        kote3++;
                        printf(" ");
                    }
                    if(kote2 == 0)
                    {
                        printf("%d",temp);
                    }
                    else
                    {
                        printf(" %d",temp);
                    }
                    temp*=2;
                }
                temp = 1;
                for(kote2 = 0;kote2<=kote1;kote2++)
                {
                    temp*=2;
                }
                printf("\n");
            }
            printf("\n");
        }
    }


    return 0;
}
