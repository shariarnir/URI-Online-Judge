#include<stdio.h>
int main(){
    int i,j = 0,T,N[1000];
    scanf("%d",&T);
    for(i = 0; i < 1000; i++){
        printf("N[%d] = %d\n",i,j);
        j = j + 1;
        if(T == j){
            j = 0;
        }
    }
    return 0;
}
