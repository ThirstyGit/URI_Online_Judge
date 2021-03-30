#include <stdio.h>
#include <math.h>

int main()

{
    int num1,num2,num3,Z;
    while(1)
    {
        scanf("%d",&num1);
        if(num1 == 0)
        {
            break;
        }
        scanf("%d",&num2);
        if(num2 == 0)
        {
            break;
        }
        scanf("%d",&num3);
        if(num3 == 0)
        {
            break;
        }
        else
        {
            Z = pow(((num1*num2*100)/num3),.5);
            printf("%d\n",Z);
        }
    }


    return 0;
}
