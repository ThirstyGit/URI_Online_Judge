#include <stdio.h>

int main()

{
    int par[5],impar[5],loop,Array[15],impar_number = 0,par_number = 0;
    for(loop = 0; loop<15; loop++)
    {
        scanf("%d",&Array[loop]);
        if(Array[loop]%2 == 0)
        {
            par[par_number] = Array[loop];
            par_number++;
        }
        else
        {
            impar[impar_number] = Array[loop];
            impar_number++;
        }
        if(par_number == 5)
        {
            for(par_number = 0; par_number<5; par_number++)
            {
                printf("par[%d] = %d\n",par_number,par[par_number]);
            }
            par_number = 0;
        }
        if(impar_number == 5)
        {
            for(impar_number = 0; impar_number<5; impar_number++)
            {
                printf("impar[%d] = %d\n",impar_number,impar[impar_number]);
            }
            impar_number = 0;
        }
    }
    for(loop = 0; loop<impar_number; loop++)
    {
        printf("impar[%d] = %d\n",loop,impar[loop]);
    }
    for(loop = 0; loop<par_number; loop++)
    {
        printf("par[%d] = %d\n",loop,par[loop]);
    }


    return 0;
}
