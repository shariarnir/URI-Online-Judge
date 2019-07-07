#include<stdio.h>
int main(){
    int N,X,Y,i,j,k,sum=0,sum_1=0;
    scanf("%d",&N);
    for(i = 0; i < N; i++){
        scanf("%d %d",&X,&Y);
        if( X < Y){
            for( j = X + 1; j < Y ; j++){
                if(j % 2 == 1){
                    sum = sum + j;
                }
            }
            printf("%d\n",sum);
            sum = 0;
        }else{
            for( k = X - 1; k > Y ; k--){
                if(k % 2 == 1){
                    sum_1 = sum_1 + k;
                }
            }
            printf("%d\n",sum_1);
            sum_1 = 0;
        }
    }
    return 0;
}
