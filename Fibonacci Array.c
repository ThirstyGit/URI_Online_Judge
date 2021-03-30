#include <stdio.h>

int main()
{
    long long int fib_value,temp,temp2;
    int i,fib,input_count;
    scanf("%d",&input_count);
    while(input_count != 0)
    {
        scanf("%d",&fib);
        input_count--;
        if(fib == 0)
        {
            fib_value = 0;
        }
        else if(fib == 1)
        {
            fib_value = 1;
        }
        else if(fib>1)
        {
            fib_value = 1;
            temp = 0;
            for(i= 2; i<=fib; i++)
            {
                temp2 = fib_value;
                fib_value +=temp;
                temp = temp2;
            }
        }
        printf("Fib(%d) = %lld\n",fib,fib_value);

    }

    return 0;
}
