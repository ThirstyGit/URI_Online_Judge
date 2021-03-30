#include<stdio.h>
#include<string.h>

int main()
{
    int n;
    char num[6];
    scanf("%d",&n);
    while(n != 0)
    {
        n--;
        scanf("%s",&num);
        if(strlen(num)==5)
        {
            printf("3\n");
        }
        else if(num[0] == 'o' && num[1] == 'n')
        {
            printf("1\n");
        }
        else if(num[0] == 'o' && num[2] == 'e')
        {
            printf("1\n");
        }
        else if(num[1] == 'n' && num[2] == 'e')
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }

    return 0;
}
