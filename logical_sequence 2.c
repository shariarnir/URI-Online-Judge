#include<stdio.h>

int main(){
    int i,j,k = 1,x,y;
    double c;
    scanf("%d %d",&x,&y);
    c = ceil(y/(x*1.0));
    for(i = 1; i <= c ; i++){
        for(j = 1; j <= x; j++){
            if( y < k ){
                break;
            }else{
                printf("%d",k);
                k = k + 1;
                if(j < x){
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
