#include <stdio.h>

int main()

{
    int numbers;
    for(numbers = 1;numbers<=100;numbers = numbers+1)
    {
     if(numbers %2 == 0)
     {
         printf("%d\n",numbers);
     }
    }
    return 0;
}
