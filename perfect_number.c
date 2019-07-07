#include<stdio.h>
#include<limits.h>
int main(){
    int i,j,N,X,sum = 0;
    scanf("%d",&N);
    for(i = 0; i < N; i++){
        scanf("%d",&X);
        for(j = 1; j < X; j++){
            sum = sum + j;
            if(sum == X){
                printf("%d eh perfeito\n",X);
                break;
            }
        }
        if( sum != X){
            printf("%d nao eh perfeito\n",X);
        }
        sum = 0;
    }
    return 0;
}
