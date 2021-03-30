#include <stdio.h>

int main()

{
    char day[100];
    int date,hour,min,sec;
    scanf("%s%d%d%s%d%s%d",&day,&date,&hour,&day,&min,&day,&sec);
    int tot_time = sec + min*60 + hour * 3600 + date*86400;
    scanf("%s%d%d%s%d%s%d",&day,&date,&hour,&day,&min,&day,&sec);
    tot_time = sec + min*60 + hour * 3600 + date*86400 - tot_time;
    printf("%d dia(s)\n",tot_time/86400);
    tot_time = tot_time % 86400;
    printf("%d hora(s)\n",tot_time/3600);
    tot_time = tot_time % 3600;
    printf("%d minuto(s)\n",tot_time/60);
    tot_time = tot_time % 60;
    printf("%d segundo(s)\n",tot_time);


    return 0;
}
