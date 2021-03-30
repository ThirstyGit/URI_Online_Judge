#include <stdio.h>

int main()

{
    int X = 1,Y = 1;
    float S = 0;
    while(X != 39)
    {
        S+= (double)X/Y;
        X+=2;
        Y*=2;
    }
    printf("%.2f\n",S);

    return 0;
}
