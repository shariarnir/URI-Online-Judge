#include<stdio.h>
int main(){
    int n,i,first = 0,second = 1,fib = 0,next = 0;
    scanf("%d",&n);
        if( n == 0){
            printf("%d\n",first);
        }
        else if(n == 1){
            printf("%d %d\n",first,second);
        }else{
            for(i = 1; i <= n; i++){
                printf("%d",fib);
                next = first + second;
                first = fib;
                second = next;
                fib = next;
                if(i < n){
                    printf(" ");
                }else{
                    break;
                }

            }
            printf("\n");
        }

    return 0;
}
