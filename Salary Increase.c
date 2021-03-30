#include <stdio.h>

int main()

{
    float salary,new_salary;
    scanf("%f",&salary);
    if(salary > 0 && salary <= 400)
    {
        new_salary = salary*1.15;
    }
    else if(salary > 400 && salary <= 800)
        {
        new_salary = salary*1.12;
    }
    else if(salary > 800 && salary <= 1200)
        {
        new_salary = salary*1.1;
    }
    else if(salary > 1200 && salary <= 2000)
        {
        new_salary = salary*1.07;
    }
    else if(salary > 2000)
        {
        new_salary = salary*1.04;
    }
    printf("Novo salario: %.2f\n",new_salary);
    printf("Reajuste ganho: %.2f\n",new_salary - salary);
    printf("Em percentual: %.0f %%\n",( new_salary / salary - 1)*100);



    return 0;
}
