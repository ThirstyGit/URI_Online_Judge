#include <stdio.h>

main()
{
    char FirstName;
    double salary,totalsell,totalsalary;
    scanf("%s%lf%lf",&FirstName,&salary,&totalsell);
    totalsalary = salary + (totalsell*15/100);
    printf("TOTAL = R$ %.2lf\n",totalsalary);
    return 0;

}
