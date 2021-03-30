#include <stdio.h>

int main()

{
    int k,l;
    double i = 0,j = 1;
    for(k=0; k<=10; k++)
    {
        if(k % 5 ==0)
        {
            printf("I=%.0lf J=%.0lf\n",i,j);
            j += 1;
            printf("I=%.0lf J=%.0lf\n",i,j);
            j += 1;
            printf("I=%.0lf J=%.0lf\n",i,j);
            j -= 2;
        }
        else
        {
            printf("I=%.1lf J=%.1lf\n",i,j);
            j += 1;
            printf("I=%.1lf J=%.1lf\n",i,j);
            j += 1;
            printf("I=%.1lf J=%.1lf\n",i,j);
            j -= 2;
        }
        i+= 0.2;
        j+= 0.2;
    }


    return 0;
}
