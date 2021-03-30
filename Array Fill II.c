#include <stdio.h>

int main()

{
    int T,N,loop,temp = 0;
    scanf("%d",&T);
    for(loop = 0;loop<1000;loop++)
    {
        if(temp<T)
        {
            printf("N[%d] = %d\n",loop,temp);
            temp++;
        }
        else
        {
            temp = 0;
            printf("N[%d] = %d\n",loop,temp);
            temp = 1;
        }
    }


    return 0;
}
