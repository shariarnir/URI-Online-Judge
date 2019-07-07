#include<stdio.h>
int main(){
    int i,N,x;
    scanf("%d",&N);
//    for(i = 0; i < N; i++){
//
//    }
    for(i = 0; ; i++){
        scanf("%d",&x);
        if(x == 0){
            printf("NULL\n");
        }
        if(x % 2 == 0 && x > 0){
            printf("EVEN POSITIVE\n");
        }
        if(x % 2 == 0 && x < 0){
            printf("EVEN NEGATIVE\n");
        }
        if((x % 2 == 1 || x % 2 == -1) && x > 0){
            printf("ODD POSITIVE\n");
        }
        if((x % 2 == 1 || x % 2 == -1) && x < 0){
            printf("ODD NEGATIVE\n");
        }
    }
    return 0;
}
