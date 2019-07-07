#include<stdio.h>
int main(){
    int i,count = 0;
    float x,array[6],average = 0;
    for( i = 0; i < 6; i++){
        scanf("%f",&array[i]);
    }
    for( i = 0; i < 6; i++){
        if(array[i] > 0){
            count++;
            average = average + array[i];
        }
    }
    average = average/count;
    printf("%d valores positivos\n",count);
    printf("%.1f\n",average);

    return 0;
}


