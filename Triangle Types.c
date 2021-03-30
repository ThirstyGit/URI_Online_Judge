#include <stdio.h>

int main()

{
    double A,B,C,temp;
    scanf("%lf%lf%lf",&A,&B,&C);
    if(B>C && B>A)
    {
        temp = B;
        B = A;
        A = temp;
    }
    else if(C>B)
    {
        temp = C;
        C = A;
        A = temp;
    }
    if(C>B && C>A)
    {
        temp = B;
        B = C;
        C = temp;
    }
    if(A >= B + C)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if(A*A == B*B + C*C)
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if(A*A > B*B + C*C)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(A*A < B*B + C*C)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(A == B && B == C)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if(A == B || A == C || B == C)
        {
            if(A != B)
            {
                printf("TRIANGULO ISOSCELES\n");
            }
            else if(A != C)
            {
                printf("TRIANGULO ISOSCELES\n");
            }
            else if(C != B)
            {
                printf("TRIANGULO ISOSCELES\n");
            }
        }
    }


    return 0;
}
