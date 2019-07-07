#include<stdio.h>
int main(){
    int i,j,L,k = 1;
    double M[12][12],sum,x,count;
    char O;
    scanf(" %c",&O);
    for(i = 0; i < 12 ; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf",&M[i][j]);
        }
    }
    for(i = 11; i >= 0; i--){
        for( j = 0 + k; j < 12 - k; j++){
            sum = sum + M[i][j];
            count++;
        }
        k++;
    }
    if(O == 'S'){
        printf("%.1lf\n",sum);
    }
    else if(O == 'M'){
        printf("%.1lf\n",sum/count);
    }
    return 0;
}



