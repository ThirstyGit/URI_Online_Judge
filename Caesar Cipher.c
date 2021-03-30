#include <stdio.h>

int main()

{
    int n,i,num;
    char str[51],str2[51];
    scanf("%d",&n);
    while(n != 0)
    {
        fflush(stdin);
        scanf("%s",&str);
        scanf("%d",&num);
        for(i = 0; str[i] != '\0'; i++)
        {
            str2[i] = str[i] - num;
            if(str2[i] < 'A')
            {
                str2[i] += 26;
            }
        }
        str2[i] = '\0';
        puts(str2);
        n--;
    }


    return 0;
}
