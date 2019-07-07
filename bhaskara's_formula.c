#include<stdio.h>
int main(){

    float A,B,C,R1,R2,Del;
    scanf("%f %f %f",&A,&B,&C);
    Del = pow(B,2) - (4 * A * C);

    if(Del < 0 || A == 0){
        printf("Impossivel calcular\n");
    }else{
        R1 = (- B + sqrt(Del))/(2 * A);
        R2 = (- B - sqrt(Del))/(2 * A);
        printf("R1 = %.5f\n",R1);
        printf("R2 = %.5f\n",R2);
    }
    return 0;
}
