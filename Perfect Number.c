#include <stdio.h>

int main()

{
    int test,num,i,sum;
    scanf("%d",&test);
    while(test!=0)
    {
        sum = 0;
        test--;
        scanf("%d",&num);
        for(i=1; i<num; i++)
        {
            if(num%i==0)
            {
                sum+=i;
            }
        }
        if(sum == num)
        {
            printf("%d eh perfeito\n",num);
        }
        else
        {
            printf("%d nao eh perfeito\n",num);
        }
    }


    return 0;
}
