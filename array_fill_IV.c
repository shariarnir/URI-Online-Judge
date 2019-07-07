#include<stdio.h>
int main(){
    int i,j = 0,k =0,m,par[5],impar[5],another_array[15];
    for( i = 0; i < 15; i++){
        scanf("%d",&another_array[i]);
    }
    for( i = 0; i < 15; i++){
        if(another_array[i] % 2 == 0){
            par[k] = another_array[i];
            printf("par[%d] = %d\n",k,par[k]);
            k++;
            if(k == 5){
                k = 0;
            }

        }else{
            impar[j] = another_array[i];
            printf("impar[%d] = %d\n",j,impar[j]);
            j++;
            if(j == 5){
                j = 0;
            }
        }
    }
    return ;
}
