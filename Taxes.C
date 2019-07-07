#include<stdio.h>
int main(){
    float a,result;
    scanf("%f",&a);
    if(a >= 0.00 && a <= 2000.00){
        printf("Isento\n");
    }
    else if(a >= 2000.01 && a <= 3000.00){
        result = (a - 2000.00) * .08;
        printf("R$ %.2f\n",result);
    }
    else if(a >= 3000.01 && a <= 4500.00){
        result = (a - 3000.00) * .18;

        result = result + (1000.00 * .08);

        printf("R$ %.2f\n",result);
    }
    else if(a > 4500.00){
        result = (a - 4500.00) * .28;
        result = result + (1500.00 * .18) + (1000.00 * .08);
        printf("R$ %.2f\n",result);
    }
    return 0;
}
