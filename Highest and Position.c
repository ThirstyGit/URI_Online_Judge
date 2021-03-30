#include <stdio.h>

int main()

{
    int number,i,highest = -1,position;
    for(i = 1; i <= 100; i = i +1)
    {
        scanf("%d",&number);
        if(highest < number)
        {
            highest = number;
            position = i;
        }
    }
    printf("%d\n%d\n",highest,position);


    return 0;
}
