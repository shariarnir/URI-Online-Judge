#include<stdio.h>
int main(){
    double R,pi = 3.14159,calculation;
    scanf("%lf",&R);
    calculation = (4.0/3) * pi * pow(R,3);
    printf("VOLUME = %.3lf\n",calculation);
    return 0;
}
