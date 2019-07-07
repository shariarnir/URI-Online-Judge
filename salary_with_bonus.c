#include<stdio.h>
int main(){

    double total,fixed_salary,sold_salary;
    char seller_name[50];
    scanf("%s",seller_name);
    scanf("%lf %lf",&fixed_salary,&sold_salary);
    total = fixed_salary + (sold_salary * .15);
    printf("TOTAL = R$ %.2lf\n",total);
    return 0;
}



