#include <stdio.h>
#include <string.h>

int main()

{
    char name[100];
    scanf("%s",&name);
    if(strcmp(name, "vertebrado") == 0)
    {
        scanf("%s",&name);
        if(strcmp(name, "ave") == 0)
        {
            scanf("%s",&name);
            if(strcmp(name, "carnivoro") == 0)
            {
                printf("aguia\n");
            }
            else if(strcmp(name, "onivoro") == 0)
            {
                printf("pomba\n");
            }
        }
        else if(strcmp(name, "mamifero") == 0)
        {
            scanf("%s",&name);
            if(strcmp(name, "onivoro") == 0)
            {
                printf("homem\n");
            }
            else if(strcmp(name, "herbivoro") == 0)
            {
                printf("vaca\n");
            }
        }
    }
    else if(strcmp(name, "invertebrado") == 0)
    {
        scanf("%s",&name);
        if(strcmp(name, "inseto") == 0)
        {
            scanf("%s",&name);
            if(strcmp(name, "hematofago") == 0)
            {
                printf("pulga\n");
            }
            else if(strcmp(name, "herbivoro") == 0)
            {
                printf("lagarta\n");
            }
        }
        else if(strcmp(name, "anelideo") == 0)
        {
            scanf("%s",&name);
            if(strcmp(name, "hematofago") == 0)
            {
                printf("sanguessuga\n");
            }
            else if(strcmp(name, "onivoro") == 0)
            {
                printf("minhoca\n");
            }
        }
    }


    return 0;
}
