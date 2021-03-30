#include<stdio.h>

int main()

{
    int loop,N,number = 0;
    scanf("%d",&N);
    int X[N],position = 0;
    for(loop =0;loop<N;loop++)
    {
        scanf("%d",&X[loop]);
    }
    number = X[0];
    for(loop = 1;loop<N;loop++)
    {
        if(X[loop]<X[loop-1])
        {
            number = X[loop];
            position = loop;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",number,position);


    return 0;
}
