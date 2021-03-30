#include <stdio.h>

int main()

{
    int age = 1,num = 0;
    float average = 0;
    while(age>=0)
    {
        scanf("%d",&age);
        if(age>= 0)
        {
            average += age;
            num++;
        }
    }
    printf("%.2f\n",average/num);


    return 0;
}
