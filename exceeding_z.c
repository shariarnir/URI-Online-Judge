#include<stdio.h>
#include<limits.h>
int main(){
    int i,j,x,z,count = 0,sum = 0;
    scanf("%d",&x);
    for(i = 0; i < INT_MAX; i++){
        scanf("%d",&z);
        if( z > x ){
            z = z;
            break;
        }
    }
    for(j = x; j < INT_MAX; j++){
            sum = sum + j;
            count++;
            if(sum > z){
                break;
            }
    }
    printf("%d\n",count);
    return 0;
}
