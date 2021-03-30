#include <stdio.h>

int main()

{
    int positives = 0,i;
    float numbers;
    for(i= 1;i<=6;i=i+1)
    {
        scanf("%f",&numbers);
        if(numbers>0)
        {
            positives = positives+1;
        }
    }
    printf("%d valores positivos\n",positives);


    return 0;
}
