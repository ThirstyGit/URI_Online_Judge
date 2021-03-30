#include <stdio.h>

int main()

{
    int i;
    while(1)
    {
        if(scanf("%d",&i) == EOF)
        {
            break;
        }
        else if(i == 0)
        {
            printf("vai ter copa!\n");
        }
        else
        {
            printf("vai ter duas!\n");
        }
    }


    return 0;
}
