#include <stdio.h>

int main(void)

{
    int loop,loop2,flag;
    char D[101],S[101];
    while(scanf("%s",&D) != EOF)
    {
        fflush(stdin);
        scanf("%s",&S);
        fflush(stdin);
        flag = 0;
        for(loop = 0; D[loop]!='\0'; loop++)
        {
            if(D[loop] == S[0])
            {
                flag = 1;
                for(loop2 = 0; S[loop2] != '\0'; loop2++)
                {
                    if(D[loop + loop2] != S[loop2])
                    {
                        flag = 0;
                        break;
                    }
                }
                if(flag == 1)
                {
                    goto program_terminate;
                }
            }
        }
        if(flag == 1)
        {
            program_terminate:
            printf("Resistente\n");
        }
        else if(flag == 0)
        {
            printf("Nao resistente\n");
        }
    }


    return 0;
}
