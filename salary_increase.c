#include<stdio.h>
int main(){
    float present_salary,new_salary,increase_rate;
    scanf("%f",&present_salary);
    if(present_salary >= 0 && present_salary <= 400){
        new_salary = present_salary + present_salary * .15;
        present_salary = new_salary - present_salary;
        increase_rate = 15;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",present_salary);
        printf("Em percentual: %.0f %%\n",increase_rate);
    }
    if(present_salary >= 400.01 && present_salary <= 800){
        new_salary = present_salary + present_salary * .12;
        present_salary = new_salary - present_salary;
        increase_rate = 12;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",present_salary);
        printf("Em percentual: %.0f %%\n",increase_rate);
    }
    if(present_salary >= 800.01 && present_salary <= 1200){
        new_salary = present_salary + present_salary * .10;
        present_salary = new_salary - present_salary;
        increase_rate = 10;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",present_salary);
        printf("Em percentual: %.0f %%\n",increase_rate);
    }
    if(present_salary >= 1200.01 && present_salary <= 2000){
        new_salary = present_salary + present_salary * .07;
        present_salary = new_salary - present_salary;
        increase_rate = 7;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",present_salary);
        printf("Em percentual: %.0f %%\n",increase_rate);
    }
    if(present_salary >= 2000){
        new_salary = present_salary + present_salary * .04;
        present_salary = new_salary - present_salary;
        increase_rate = 4;
        printf("Novo salario: %.2f\n",new_salary);
        printf("Reajuste ganho: %.2f\n",present_salary);
        printf("Em percentual: %.0f %%\n",increase_rate);
    }
    return 0;
}
