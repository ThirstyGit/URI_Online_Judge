#include <stdio.h>

int main()

{
    int alcohol = 0,gasoline = 0,diesel = 0,number,flag = 0;
    while(flag == 0)
    {
        scanf("%d",&number);
        if(number == 1)
        {
            alcohol++;
        }
        else if(number == 2)
        {
            gasoline++;
        }
        else if(number == 3)
        {
            diesel++;
        }
        else if(number == 4)
        {
            flag = 1;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n",alcohol,gasoline,diesel);


    return 0;
}
