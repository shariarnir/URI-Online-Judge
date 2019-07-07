#include<stdio.h>
int main(){

int n, i, j, k = 0;
    for(;;){
        scanf("%d",&n);
         k = n /2 ;
        if( n == 0){ break;}
        if( n >= 5){
            for( i = 0 ; i < n ; i++ ){
                for( j = 0 ; j < n ; j++){
                    if( i == 0 || i == n-1 ||  j == 0 || j == n-1 ){printf("1 ");}
                    //if( i == 1 &&  j == 1  || i == n-2 || j == n-2 ){ printf("2 ");}
                    else if( i == k && j == k ){ printf("3 ");}
                    else{ printf("2 ");}
                }
                printf("\n");
            }
        }
        else{
            for(i = 0; i< n; i++ ){
                for(j = 0; j < n; j++){
                    if( i == 0 || i == n-1 || j == 0 || j == n-1){printf("1 ");}
                    else printf("2 ");
                }
                printf("\n");
            }
        }
    }
    return 0;
}
