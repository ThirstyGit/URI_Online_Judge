#include <stdio.h>

int main()
{
    int productcode1,productcode2,product1amount,product2amount;
    double product1value,product2value,totalamount;
    scanf("%d%d%lf%d%d%lf",&productcode1,&product1amount,&product1value,&productcode2,&product2amount,&product2value);
    totalamount = product1amount*product1value + product2amount*product2value;
    printf("VALOR A PAGAR: R$ %.2lf\n",totalamount);


    return 0;
}
