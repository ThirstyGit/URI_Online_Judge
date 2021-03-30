#include <stdio.h>

int main()

{
    int X,Y,Z,temp,A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if(A<B)
    {
        temp = A;
    }
    else
    {
        temp = B;
    }
    if(temp<C)
    {
        X = temp;
        if(temp - A == 0)
        {
            if(B<C)
            {
                Y = B;
                Z = C;
            }
            else
            {
                Y = C;
                Z = B;
            }
        }
        else
        {
            if(A<C)
            {
                Y = A;
                Z = C;
            }
            else
            {
                Y = C;
                Z = A;
            }
        }
    }
    else
    {
        X = C;
        Y = temp;
        if(temp - A == 0)
        {
            Z = B;
        }
        else
        {
            Z = A;
        }
    }
    printf("%d\n%d\n%d\n",X,Y,Z);
    printf("\n%d\n%d\n%d\n",A,B,C);


    return 0;
}
