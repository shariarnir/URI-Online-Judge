#include<stdio.h>
#include<limits.h>
int main(){
    int i,x,j,count = 0,sum = 0;
    for(i = 0; i < INT_MAX ; i++){
        scanf("%d",&x);
        if(x == 0){
                break;
            }else{
                for(j = 0; j < INT_MAX; j++){
                    if(x % 2 == 0){
                        printf("EVEN : %d ",x);
                        count = count + 1;
                        sum   = sum + x;
                }
                x = x + 1;
                if(count == 5){
                    break;
                }
            }
             printf("%d\n",sum);
             count = 0;
             sum = 0;
        }


    }
    return 0;
}
