#include <stdio.h>

int main()

{
    int loop1,loop2,C;
    double M[12][12],sum = 0;
    char T;
    scanf("%d ",&C);
    T = getchar();
    for(loop1 = 0;loop1<12;loop1++)
    {
        for(loop2 = 0;loop2<12;loop2++)
        {
            scanf("%lf",&M[loop1][loop2]);
        }
    }
    for(loop1 = 0;loop1<12;loop1++)
    {
        sum+= M[loop1][C];
    }
    if(T == 'S')
    {
        printf("%01lf\n",sum);
    }
    else if(T == 'M')
    {
        printf("%0.1lf\n",sum/12.0);
    }


    return 0;
}
