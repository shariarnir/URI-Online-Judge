#include<stdio.h>
int main(){
    int i,j,L;
    float M[12][12],sum,x,count;
    char O;
   // scanf("%d",&L);
    scanf(" %c",&O);
    for(i = 0; i < 12 ; i++){
        for(j = 0; j < 12; j++){
            scanf("%f",&M[i][j]);
        }
    }
    for(i = 1; i < 12; i++){
        for( j = 0; j <= i - 1; j++){
            sum = sum + M[i][j];
            count++;
        }
    }
    if(O == 'S'){
        printf("%.1f\n",sum);
    }
    else if(O == 'M'){
        printf("%.1f\n",sum/count);
    }
    return 0;
}
