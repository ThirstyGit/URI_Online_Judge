#include <stdio.h>

int main()

{
    double A,B,C,trianglearea,circlearea,traparea,squarearea,rectanglearea;

    scanf("%lf%lf%lf",&A,&B,&C);
    trianglearea = (double)1/2*A*C;
    circlearea = 3.14159*C*C;
    traparea = ((A+B)/2)*C;
    squarearea = B*B;
    rectanglearea = A*B;
    printf("TRIANGULO: %.3lf\n",trianglearea);
    printf("CIRCULO: %.3lf\n",circlearea);
    printf("TRAPEZIO: %.3lf\n",traparea);
    printf("QUADRADO: %.3lf\n",squarearea);
    printf("RETANGULO: %.3lf\n",rectanglearea);


    return 0;
}
