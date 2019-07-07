#include<stdio.h>
#include<limits.h>
int main(){
    int n,i,j,sum = 0,x,y,count = 0;
    scanf("%d",&n);
    for(i = 0;i < n; i++){
        scanf("%d %d",&x,&y);
        for(j = 0; j < INT_MAX; j++){
            if(count == y){
                break;
            }
            if(x % 2 == 1 || x % 2 == -1){
                    //printf("Odd:%d\n",x);
                    count = count + 1;
                    sum = sum + x;
            }
            x+=1;
        }
        printf("%d\n",sum);
        count = 0;
        sum = 0;
    }
    return 0;
}
