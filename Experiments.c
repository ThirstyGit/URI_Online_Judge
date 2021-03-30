#include <stdio.h>

int main()

{
    char name;
    int i,C = 0,R = 0,S = 0,number,value;
    float amount;
    scanf("%d",&value);
    for(i = 1; i<= value;i = i+1)
    {
        scanf("%d %c",&number,&name);
        if(name == 'C')
        {
            C = C + number;
        }
        else if(name == 'R')
        {
            R = R + number;
        }
        else if(name == 'S')
        {
            S = S + number;
        }
    }
    printf("Total: %d cobaias\n",C+R+S);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2f %%\n",((float)C/(C+R+S))*100);
    printf("Percentual de ratos: %.2f %%\n",((float)R/(C+R+S))*100);
    printf("Percentual de sapos: %.2f %%\n",((float)S/(C+R+S))*100);

    return 0;
}
