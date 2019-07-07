#include<stdio.h>
int main(){
    int i,j;
    double arr[3],value,temp,A,B,C;
    for(i = 0; i < 3; i++){
        scanf("%lf",&value);
        arr[i] = value;
    }
    //Sorting by Desending order
    for(i = 0; i < 3-1; i++){
        for(j = 0; j < 3-1-i; j++){
            if(arr[j] < arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
//    for(i = 0; i < 3; i++){
//        printf("%lf",arr[i]);
//    }

    A = arr[0];
    B = arr[1];
    C = arr[2];

    if(A >= B + C){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(pow(A,2) > pow(B,2) + pow(C,2)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(pow(A,2) == pow(B,2) + pow(C,2)){
        printf("TRIANGULO RETANGULO\n");
    }
    if(pow(A,2) < pow(B,2) + pow(C,2)){
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(A == B && B == C){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(A == B || B == C || C == A){
        printf("TRIANGULO ISOSCELES\n");
    }
    return 0;
}
