#include<stdio.h>
#include<limits.h>
int main(){
    int m,n,j,i,k,sum=0,sum_1=0;

       for(i = 0; i < INT_MAX ;i++){
            scanf("%d %d",&m,&n);
            sum = 0;
            sum_1 = 0;
            if(m <= 0 || n <= 0){
                break;
            }else{
                if(m >= n){
                    for(i = n; i <= m;i++){
                        printf("%d ",i);
                        sum = sum + i;
                    }
                    printf("Sum=%d\n",sum);
                }else{
                    for(i = m; i <= n;i++){
                        printf("%d ",i);
                        sum_1 = sum_1 + i;
                    }
                    printf("Sum=%d\n",sum_1);
                }
            }
       }
    return 0;
}
