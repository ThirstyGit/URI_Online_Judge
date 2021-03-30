#include <stdio.h>

int main()

{
    double floatvalue;
    int intvalue;
    scanf("%lf",&floatvalue);
    intvalue = floatvalue;
    floatvalue = floatvalue - intvalue;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",intvalue/100);
    intvalue = intvalue %100;
    printf("%d nota(s) de R$ 50.00\n",intvalue/50);
    intvalue = intvalue %50;
    printf("%d nota(s) de R$ 20.00\n",intvalue/20);
    intvalue = intvalue %20;
    printf("%d nota(s) de R$ 10.00\n",intvalue/10);
    intvalue = intvalue %10;
    printf("%d nota(s) de R$ 5.00\n",intvalue/5);
    intvalue = intvalue %5;
    printf("%d nota(s) de R$ 2.00\n",intvalue/2);
    intvalue = intvalue %2;
    printf("MOEDAS:\n");
    floatvalue = intvalue + floatvalue;
    intvalue = floatvalue*100;
    printf("%d moeda(s) de R$ 1.00\n",intvalue/100);
    intvalue = intvalue%100;
    printf("%d moeda(s) de R$ 0.50\n",intvalue/50);
    intvalue = intvalue%50;
    printf("%d moeda(s) de R$ 0.25\n",intvalue/25);
    intvalue = intvalue%25;
    printf("%d moeda(s) de R$ 0.10\n",intvalue/10);
    intvalue = intvalue%10;
    printf("%d moeda(s) de R$ 0.05\n",intvalue/5);
    intvalue = intvalue%5;
    printf("%d moeda(s) de R$ 0.01\n",intvalue/1);


    return 0;
}
