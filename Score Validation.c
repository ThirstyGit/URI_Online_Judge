#include <stdio.h>

int main()

{
    int i1 = 0,i2 = 0;
    float num1,num2;
    while(i1 == 0)
    {
        scanf("%f",&num1);
        if(num1<0 || num1 >10)
        {
            printf("nota invalida\n");
        }
        else
        {
            i1 = 1;
        }
    }
    while(i2 == 0)
    {
        scanf("%f",&num2);
        if(num2<0 || num2 >10)
        {
            printf("nota invalida\n");
        }
        else
        {
            i2 = 1;
        }
    }
    printf("media = %.2f\n",(num1+num2)/2);

    return 0;
}
