#include <stdio.h>

main()
{
    int number,hoursinmonth;
    float payperhour,salary;
    scanf("%d%d",&number,&hoursinmonth);
    scanf("%f",&payperhour);
    salary = hoursinmonth*payperhour;
    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %.2f\n",salary);
    return 0;

}
