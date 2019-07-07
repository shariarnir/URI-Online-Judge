#include<stdio.h>
int main(){
    int n,i,fac = 1;
    scanf("%d",&n);
    for(i = n; i >=1; i--){
        fac = fac * i;
    }
    printf("%d\n",fac);
    return 0;
}
