#include <stdio.h>

int main()

{
    int i1,i2,flag = 1;
    float score1,score2;
    while(flag == 1)
    {
        i1 = 0;
        while(i1 == 0)
        {
            scanf("%f",&score1);
            if(score1>=0 && score1<= 10)
            {
                i1 = 1;
            }
            else
            {
                printf("nota invalida\n");
            }
        }
        i2 = 0;
        while(i2 == 0)
        {
            scanf("%f",&score2);
            if(score2>=0 && score2<= 10)
            {
                i2 = 1;
            }
            else
            {
                printf("nota invalida\n");
            }
        }
        printf("media = %.2f\n",(score1+score2)/2);
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&flag);
        while(flag != 1 && flag != 2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&flag);
        }
    }


    return 0;
}
