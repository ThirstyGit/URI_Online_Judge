#include <stdio.h>

int main()

{
    double Array,N[100];
    scanf("%lf",&Array);
    int loop;
    N[0] = Array;
    for(loop = 1;loop<100;loop++)
    {
        N[loop] = N[loop-1]/2;
    }
    for(loop = 0;loop<100;loop++)
    {
        printf("N[%d] = %.4lf\n",loop,N[loop]);
    }


    return 0;
}
