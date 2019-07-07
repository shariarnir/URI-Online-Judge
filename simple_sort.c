#include<stdio.h>
int main(){
    int i,array[3],arr[3],j=0,temp;
    for(i = 0;i < 3; i++){
        scanf("%d",&array[i]);
    }
    for(i = 0;i < 3; i++){
        arr[i] = array[i];
    }
    for(i = 0;i < 3 - 1 ; i++){
        for(j = 0; j < 3 - 1 - i; j++){
                if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(i = 0;i < 3; i++){
        printf("%d\n",array[i]);
    }
    printf("\n");
    for(i = 0;i < 3; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}
