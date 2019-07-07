#include<stdio.h>
#include<limits.h>
int main(){
    int x,j,i;
    for(i = 0; i <= INT_MAX; i++){
        scanf("%d",&x);
        if(x == 0){
            break;
        }else{
            for(j = 1; j <= x; j++){
                printf("%d",j);
                if(j < x){
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
