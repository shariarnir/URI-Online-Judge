#include<stdio.h>
#include<limits.h>
int main(){
    float i,S = 0,j = 1;
        for(i = 1; i <= 100; i++){
            S = S + j/i;
        }
        printf("%.2f\n",S);
        S = 0;
    return 0;
}
