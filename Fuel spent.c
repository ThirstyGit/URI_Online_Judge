#include <stdio.h>

int main()

{

    int hours,speed;
    double fuelspent;

    scanf("%d%d",&hours,&speed);
    fuelspent = ((double)hours*speed)/12;
    printf("%.3lf\n",fuelspent);

    return 0;
}
