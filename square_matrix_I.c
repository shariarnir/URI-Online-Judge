#include<stdio.h>
#include<limits.h>
#include<math.h>
int main(){
    int i,j,k = 1,l = 1,n,m,p,x,y,array[10][10];
    scanf("%d",&n);
    if(n % 2 == 0){
        m = n/2;
        p = m + 1;
    }else{
        m = (n + 1)/2;
        p = m;
    }
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i >= 1 && i < n - 1){
                if( j == 0 || j == n - 1){
                    array[i][j] = k;
                }else{

                    //n er even odd ber korchi and next value er start and end porjonto loop ghuraychi
//                    for( x = m; x <= p; x++){
//                        array[i][j] = k + 1;
//                    }

                    array[i][j] = k + 1;
                }
            }else{
                array[i][j] = k;
            }
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}
