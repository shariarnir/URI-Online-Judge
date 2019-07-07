#include<stdio.h>
int main(){
    int i,N,min,j;
    scanf("%d",&N);
    int X[N];
    for(i = 0; i < N; i++){
        scanf("%d",&X[i]);
    }
    min = X[0];
    for(i = 0; i < N; i++){
        if(min > X[i]){
            min = X[i];
            j = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",X[j],j);
    return 0;
}
