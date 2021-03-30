#include <stdio.h>
#include <math.h>

int main()

{
    double A,B,C,R;
    scanf("%lf%lf%lf",&A,&B,&C);
    if(A==0 || B*B- 4*A*C<0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        R = (-B+sqrt(B*B - 4*A*C))/2/A;
        printf("R1 = %.5lf\n",R);
        R = (-B-sqrt(B*B - 4*A*C))/2/A;
        printf("R2 = %.5lf\n",R);
    }


    return 0;
}
