#include <stdio.h>

int main()

{

    char name[10];
    char namer[10] = {"Kakarot\0"};
    printf("Hello.\n\nWhat is your name?\n");
    scanf("%s",&name);
    printf("Nice to meet you %s.\nYou seem like a very nice person.\n",name);
    printf("My name is %s.\n",namer);


    return 0;
}
