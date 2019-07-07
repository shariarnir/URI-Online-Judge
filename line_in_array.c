#include<stdio.h>
int main(){
    int i,j,L;
    float M[12][12],sum,x;
    char T;
    scanf("%d",&L);
    scanf(" %c",&T);
    for(i = 0; i < 12 ; i++){
        for(j = 0; j < 12; j++){
            scanf("%f",&M[i][j]);
        }
    }
    for(i = L; i <= L; i++){
        for( j = 0; j < 12; j++){
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
