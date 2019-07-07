#include<stdio.h>
int main(){
    int i,j,C;
    float M[12][12],sum;
    char T;
    scanf("%d",&C);
    scanf(" %c",&T);
    for(i = 0; i < 12 ; i++){
        for(j = 0; j < 12; j++){
            scanf("%f",&M[i][j]);
        }
    }
    for(i = 0; i < 12; i++){
        for( j = C; j <= C; j++){
            sum = sum + M[i][j];
        }
    }
    if(T == 'S'){
        printf("%.1f\n",sum);
    }
    else if(T == 'M'){
        printf("%.1f\n",sum/12);
    }
    return 0;
}
