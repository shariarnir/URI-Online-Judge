#include<stdio.h>
int main(){
    int i,array[5],count = 0;
    for( i = 0; i < 5; i++){
        scanf("%d",&array[i]);
    }
    for( i = 0; i < 5; i++){
        if(array[i] % 2 == 0){
            count++;
        }
    }
    printf("%d valores pares\n",count);
    return 0;
}


