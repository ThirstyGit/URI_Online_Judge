#include <stdio.h>

int main()

{
    int N = 1;
    float S = 0;
    while(N!= 101)
    {
        S+= 1.0/N;
        N++;
    }
    printf("%.2f\n",S);


    return 0;
}
