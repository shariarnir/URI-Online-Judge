#include<stdio.h>
int main(){
    int i,x,y,sum = 0;
    scanf("%d%d",&x,&y);
    if(x > y){
        for( i = x-1; i > y; i--){
            if(i % 2 == 1 || i % 2 == -1){
                sum = sum + i;
            }
        }
    }else{
        for( i = x + 1; i < y; i++){
            if(i % 2 == 1){
                sum = sum + i;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}

