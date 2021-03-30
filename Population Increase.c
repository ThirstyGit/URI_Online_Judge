#include<stdio.h>

int main(){
    int PA,PB,T,time;
    double G1,G2;
    scanf("%d",&T);
    while(T != 0)
    {
        time = 0;
        T--;
        scanf("%d%d%lf%lf",&PA,&PB,&G1,&G2);
        while(PA<=PB)
        {
            PA += PA*G1/100;
            PB += PB*G2/100;
            time++;
            if(time>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(time<=100)
        {
            printf("%d anos.\n",time);
        }

    }
    return 0;
}
