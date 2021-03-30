#include <stdio.h>

int main()

{
    int N,i;
    float number1,number2,number3;
    scanf("%d",&N);
    for(i=1;i<=N;i = i+1)
    {
        scanf("%f%f%f",&number1,&number2,&number3);
        printf("%.1f\n",(number1*2 + number2*3 + number3*5)/10);
    }


    return 0;
}
