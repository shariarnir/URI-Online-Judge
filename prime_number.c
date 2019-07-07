#include<stdio.h>
int main(){
    int i,j,x,n,count = 0 ;
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        scanf("%d",&x);
        for(j = 1; j <= x; j++){
            if(x % j == 0){
                count += 1;
                //printf("Count: %d\n",count);
            }
        }
        if(count <= 2)
        {
            printf("%d eh primo\n",x);
        }else{
            printf("%d nao eh primo\n",x);
        }
        count = 0;
    }
    return 0;
}
