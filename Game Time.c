#include <stdio.h>

int main()

{
    int time1,time2;
    scanf("%d%d",&time1,&time2);
    if(time1>time2)
    {
        printf("O JOGO DUROU %d HORA(S)\n",24-time1+time2);
    }
    else if(time2>time1)
    {
        printf("O JOGO DUROU %d HORA(S)\n",time2-time1);
    }
    else
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }




    return 0;
}
