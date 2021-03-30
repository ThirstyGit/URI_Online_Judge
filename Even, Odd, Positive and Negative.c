#include <stdio.h>

int main()

{
    int i,number,even = 0,odd = 0,positive = 0,negative = 0;
    for(i=1; i<=5; i=i+1)
    {
        scanf("%d",&number);
        if(number % 2 == 0)
        {
            even = even+1;
        }
        else
        {
            odd = odd+1;
        }
        if(number>0)
        {
            positive = positive +1;
        }
        else if(number<0)
        {
            negative = negative +1;
        }

    }
    printf("%d valor(es) par(es)\n",even);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",positive);
    printf("%d valor(es) negativo(s)\n",negative);


    return 0;
}
