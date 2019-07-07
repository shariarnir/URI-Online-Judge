#include<stdio.h>
int main(){
    float A,B,C;
    double pi = 3.14159,calculation = 0.0;
    scanf("%f %f %f",&A,&B,&C);
    calculation = (A * C) / 2;
    printf("TRIANGULO: %.3lf\n",calculation);
    calculation = pi * pow(C,2);
    printf("CIRCULO: %.3f\n",calculation);
    calculation = .5 * (A + B) * C;
    printf("TRAPEZIO: %.3f\n",calculation);
    calculation = pow(B,2);
    printf("QUADRADO: %.3f\n",calculation);
    calculation = A * B;
    printf("RETANGULO: %.3f\n",calculation);
    return 0;
}
