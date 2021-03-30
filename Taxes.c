#include <stdio.h>

int main()

{
    float money;
    scanf("%f",&money);
    if(money>2000 && money <= 3000 )
    {
        money = money - 2000;
        money = money * 0.08;
        printf("R$ %.2f\n",money);
    }
    else if(money > 3000 && money <= 4500)
    {
        money = money - 3000;
        money = money * 0.18 + 80;
        printf("R$ %.2f\n",money);
    }
    else if(money > 4500)
    {
        money = money - 4500;
        money = money * 0.28 + 350;
        printf("R$ %.2f\n",money);
    }
    else if(money <= 2000)
    {
        printf("Isento\n");
    }


    return 0;
}
