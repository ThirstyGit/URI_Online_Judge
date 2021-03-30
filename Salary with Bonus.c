#include <stdio.h>

int main()
{
    char FirstName[100];
    double salary,totalsell,totalsalary;
    fflush(stdin);
    gets(FirstName);
    fflush(stdin);
    scanf("%lf%lf",&salary,&totalsell);
    totalsalary = salary + (totalsell*15/100);
    printf("TOTAL = R$ %.2lf\n",totalsalary);
    return 0;

}
