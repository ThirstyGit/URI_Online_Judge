#include <stdio.h>

int main()

{
    int i,loop;
    scanf("%d",&i);
    for(loop = 1; loop<=i; loop++)
    {
        if(loop!= i)
        {

            printf("Ho ");
        }
        else
        {

            printf("Ho!");
        }
    }
    printf("\n");


    return 0;
}
