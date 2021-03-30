#include <stdio.h>
#include <math.h>

int main()

{
    int N,i,number,flag;
    scanf("%d",&N);
    while(N!=0)
    {
        N--;
        scanf("%d",&number);
        if(number == 2 || number == 3)
        {
            printf("%d eh primo\n",number);
        }
        else
        {
            for(i = 2; i<=floor(sqrt(number)); i++)
            {
                flag = 1;
                if(number % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
            {
                printf("%d eh primo\n",number);
            }
            else
            {
                printf("%d nao eh primo\n",number);
            }
        }
    }


    return 0;
}
