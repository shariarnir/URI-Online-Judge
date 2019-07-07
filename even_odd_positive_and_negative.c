#include<stdio.h>
int main(){
    int i,array[5],even_count=0,odd_count=0,positive_count=0,negative_count=0;
    for( i = 0; i < 5; i++){
        scanf("%d",&array[i]);
    }
    for( i = 0; i < 5; i++){
        if(array[i] % 2 == 0){
            even_count++;
        }
        if(array[i] % 2 == 1 || array[i] % 2 == -1){
            odd_count++;
        }
        if(array[i] > 0){
            positive_count++;
        }
        if(array[i] < 0){
            negative_count++;
        }
    }
    printf("%d valor(es) par(es)\n",even_count);
    printf("%d valor(es) impar(es)\n",odd_count);
    printf("%d valor(es) positivo(s)\n",positive_count);
    printf("%d valor(es) negativo(s)\n",negative_count);
    return 0;
}



