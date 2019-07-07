#include<stdio.h>
#include<limits.h>
int main(){
    int i,j,n;
    float a,b,c;
    for(i = 0; i < INT_MAX; i++){
        scanf("%d",&n);
        for(j = 0; j < n; j++){
            scanf("%f%f%f",&a,&b,&c);
            a = (a * 2 + b * 3 + c * 5)/10;
            printf("%.1f\n",a);
        }
        break;
    }
    return 0;
}
