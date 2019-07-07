#include<stdio.h>
int main(){
    int N,X,i,count = 0;
    scanf("%d",&N);
    for(i = 0; i < N; i++){
        scanf("%d",&X);
        if(X >= 10 && X <= 20){
            count = count + 1;
        }
    }
    printf("%d in\n",count);
    printf("%d out\n",N-count);
    return 0;
}
