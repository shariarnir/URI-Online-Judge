#include<stdio.h>
#include<limits.h>
int main(){
    int i,sum= 0,A,N,j,count = 0;
    scanf("%d %d",&A,&N);
    for(j = 0; j < INT_MAX; j++){
        if(N > 0){
            for(i = 0; i < N; i++){
                sum = sum + A;
                A++;
                count++;
                if(count == N)
                    break;
            }
            break;
        }else{
            scanf("%d",&N);
        }
    }
    printf("%d\n",sum);
    return 0;
}
