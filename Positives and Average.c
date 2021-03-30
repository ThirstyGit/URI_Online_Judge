#include <stdio.h>

int main()

{
    int i,positives = 0;
    float number,totalnumber = 0;
    for(i=1;i<=6;i=i+1)
    {
        scanf("%f",&number);
        if(number>0)
        {
            positives = positives +1;
            totalnumber = totalnumber + number;
        }
    }
    printf("%d valores positivos\n%.1f\n",positives,totalnumber/positives);


    return 0;
}
