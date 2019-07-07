#include<stdio.h>
#include<limits.h>
int main(){
    float i,n,count = 0;
    float average,sum;
    for(i = 0; i < INT_MAX; i++){
        scanf("%f",&n);
        if(n >= 0){
            sum =  sum + n;
            count++;
        }else{
            break;
        }
    }
    printf("%.2f\n",sum/count);
    return 0;
}
