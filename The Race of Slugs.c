#include <stdio.h>

int main()

{
    int loop,L,V[501],flag;
    while(1)
    {
        if(scanf("%d",&L) == EOF)
        {
            break;
        }
        else
        {
            flag = 1;
            for(loop = 1;loop<=L;loop++)
            {
                scanf("%d",&V[loop]);
            }
            for(loop = 1;loop<=L;loop++)
            {
                if(V[loop]>= 10 && V[loop]<20 && flag == 1)
                {
                    flag = 2;
                }
                else if(V[loop]>=20)
                {
                    flag = 3;
                }
            }
            printf("%d\n",flag);
        }
    }


    return 0;
}
