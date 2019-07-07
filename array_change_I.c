#include<stdio.h>
int main(){
    int i,j = 19,k,N[20];
    for(i = 0; i < 20; i++){
        scanf("%d",&N[i]);
    }
    for(i = 0; i < 10; i++){
        k = N[i];
        N[i] = N[j];
        N[j] = k;
        j--;
    }
    for(i = 0; i < 20; i++){
        printf("N[%d] = %d\n",i,N[i]);
    }
    return 0;
}

