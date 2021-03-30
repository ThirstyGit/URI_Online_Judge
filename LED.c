#include <stdio.h>

int main()

{
    int n,leds = 0,i;
    char num[101];
    scanf("%d",&n);
    while(n != 0)
    {
        n--;
        leds = 0;
        i = 0;
        scanf("%s",&num);
        while(num[i] != '\0')
        {
            if(num[i] == '0')
            {
                leds += 6;
            }
            else if(num[i] == '1')
            {
                leds += 2;
            }
            else if(num[i] == '2')
            {
                leds += 5;
            }
            else if(num[i] == '3')
            {
                leds += 5;
            }
            else if(num[i] == '4')
            {
                leds += 4;
            }
            else if(num[i] == '5')
            {
                leds += 5;
            }
            else if(num[i] == '6')
            {
                leds += 6;
            }
            else if(num[i] == '7')
            {
                leds += 3;
            }
            else if(num[i] == '8')
            {
                leds += 7;
            }
            else if(num[i] == '9')
            {
                leds += 6;
            }
            i++;
        }
        printf("%d leds\n",leds);
    }



    return 0;
}
