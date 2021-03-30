#include <stdio.h>

int main()

{
    double N1,N2,N3,N4,N5,result;
    scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);
    result = (N1*2 + N2*3 + N3*4 +N4*1)/10;
    printf("Media: %.1lf\n",result);
    if(result>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(result<=4.9)
    {
        printf("Aluno reprovado.\n");
    }
    else if(result>=5.0 && result<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&N5);
        printf("Nota do exame: %.1lf\n",N5);
        result = (result + N5)/2;
        if(result>=5.0)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",result);
        }
        else if(result<5)
        {
            printf("Aluno reprovado.\n");
        }
    }

    return 0;
}
