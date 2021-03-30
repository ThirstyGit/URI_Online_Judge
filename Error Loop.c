#include <stdio.h>
#include <string.h>

int main()

{
    char name[1];
    int C1 = 0,R1 = 0,S1 = 0,i,number;
    float amount;
    scanf("%d",&number);
    for(i = 1; i <= number; i = i +1)
    {
        printf("%d\n",i);
        scanf("%f",&amount);
        scanf("%s",&name);
        if(strcmp(name, "C") == 0)
        {
            C1 = C1 + amount;
        }
        else if(strcmp(name, "R") == 0)
        {
            R1 = R1 + amount;
        }
        else
        {
            S1 = S1 + amount;
        }
    }
    printf("Total: %d cobaias\n",C1+R1+S1);
    printf("Total de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\n",C1,R1,S1);
    printf("%d\n%d\n%d",amount = C1/(C1+R1+S1)*100,amount = R1/(C1+R1+S1)*100,amount = S1/(C1+R1+S1)*100);


    return 0;
}
