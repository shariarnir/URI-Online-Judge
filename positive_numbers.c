#include<stdio.h>
int main(){
    int i,count=0;
    float array[6];
    for( i = 0; i < 6; i++){
        scanf("%f",&array[i]);
    }
    for( i = 0; i < 6; i++){
        if(array[i] > 0){
            count++;
        }
    }
    printf("%d valores positivos\n",count);

    return 0;
}
