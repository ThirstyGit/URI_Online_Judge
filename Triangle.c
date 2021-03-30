#include <stdio.h>

int main()

{
    float X,Y,Z;//X Y X are three sides of a triangle.
    scanf("%f%f%f",&X,&Y,&Z);
    if(X+Y > Z && X+Z > Y && Y+Z > X)
    {
        printf("Perimetro = %.1f\n",(X+Y+Z));
    }
    else
    {
        printf("Area = %.1f\n",Z*(X+Y)/2);
    }
    return 0;
}
