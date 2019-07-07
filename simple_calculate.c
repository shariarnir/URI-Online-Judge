#include<stdio.h>
int main(){
    int product_code1,units_for_p1;
    int product_code2,units_for_p2;
    float product_code1_price,product_code2_price,calculation;
    scanf("%d %d %f %d %d %f",&product_code1,&units_for_p1,&product_code1_price,&product_code2,&units_for_p2,&product_code2_price);
    calculation = (units_for_p1 * product_code1_price) + (units_for_p2 * product_code2_price);
    printf("VALOR A PAGAR: R$ %.2f\n",calculation);
    return 0;
}
