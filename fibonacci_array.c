#include<stdio.h>
#include<limits.h>
int main(){
    int i,j,N,T,array[60],first_fib = 0,second_fib = 1,next_fib,sum =0;
    scanf("%d",&T);
    scanf("%d",&N);

//    for( i = 0; i < N; i++){
//         printf("%d ",array[i]);
//    }
    for( i = 0; i < N; i++){
         array[i] = first_fib;
         next_fib = first_fib + second_fib;
         first_fib = second_fib;
         second_fib = next_fib;
    }
    for(i = 0; i < T; i++){
        scanf("%d",&N);
        printf("%d",array[N]);
    }

    return 0;
}
