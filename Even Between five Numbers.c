#include <stdio.h>

int main()

{
    int i,values,evens = 0;
    for(i=1;i<=5;i= i+1)
    {
        scanf("%d",&values);
        if(values%2 == 0)
        {
            evens = evens + 1;
        }
    }
    printf("%d valores pares\n",evens);

    return 0;
}
