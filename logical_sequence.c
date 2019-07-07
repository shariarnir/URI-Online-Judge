#include<stdio.h>
int main(){
    int i,j=1,n;
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        printf("%d %d %d\n",j,j*j,j*j*j);
        printf("%d %d %d\n",j,(j*j+1),(j*j*j+1));
        j++;
    }
    return 0;
}
