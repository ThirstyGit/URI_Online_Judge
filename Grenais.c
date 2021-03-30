#include <stdio.h>

int main()

{
    int inter = 0,gremio = 0,goal_i,goal_g,flag = 1,grenais = 0;
    while(flag == 1)
    {
        grenais++;
        scanf("%d%d",&goal_i,&goal_g);
        if(goal_g>goal_i)
        {
            gremio++;
        }
        else if(goal_g<goal_i)
        {
            inter++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&flag);
        if(flag!= 1 && flag!=2)
        {
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d",&flag);
        }
    }
    printf("%d grenais\n",grenais);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio);
    printf("Empates:%d\n",gremio+inter-grenais);
    if(inter>gremio)
    {
        printf("Inter venceu mais\n");
    }
    else if(inter<gremio)
    {
        printf("Gremio venceu mais\n");
    }


    return 0;
}
