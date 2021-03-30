#include <stdio.h>

int main()

{
    double totdistance,totfuel,averageconsumption;
    scanf("%lf%lf",&totdistance,&totfuel);
    averageconsumption = totdistance/totfuel;
    printf("%.3lf km/l\n",averageconsumption);
    return 0;
}
