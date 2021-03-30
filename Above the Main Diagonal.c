#include <stdio.h>

int main()

{
    int loop1,loop2;
    double M[12][12],sum = 0;
    char O;
    O = getchar();
    for(loop1 = 0;loop1<12;loop1++)
    {
        for(loop2 = 0;loop2<12;loop2++)
        {
            scanf("%lf",&M[loop1][loop2]);
        }
    }
    for(loop1 = 0;loop1<11;loop1++)
    {
        for(loop2 = loop1+1;loop2<12;loop2++)
        {
            sum+=M[loop1][loop2];
        }
    }
    if(O == 'S')
    {
        printf("%.1lf\n",sum);
    }
    else if(O == 'M')
    {
        printf("%.1lf\n",sum/66.0);
    }


    return 0;
}
