#include<stdio.h>
int main()
{
    int i,C,N,sum = 0,k = 1;
    scanf("%d",&C);
    for(i = 0; i < C; i++){
        scanf("%d",&N);
        if(N % 2 == 0){
            printf("0\n");
        }else{
            printf("1\n");
        }
    }
}
