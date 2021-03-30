#include <stdio.h>

int main()

{
    int time1,time2,time3,time4;
    scanf("%d%d%d%d",&time1,&time3,&time2,&time4);
    time1 = (time2*60 + time4) - (time1*60 + time3);
    if ( time1 <= 0 )
    {
        time1 = time1 + 1440;
    }
    time2 = time1/60;
    time1 =time1 % 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", time2, time1);
    return 0;
}
