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
    for(i = 0; i < 6; i++){
        for( j = 0; j < i; j++){
            sum = sum + M[i][j];
            count++;
        }
    }
    for(i = 6; i < 12; i++){
        for( j = 0; j < 12 - i - 1; j++){
            sum = sum + M[i][j];
            count++;
        }
    }
    if(O == 'S'){
        printf("%.1lf\n",sum);
    }
    else if(O == 'M'){
        printf("%.1lf\n",sum/count);
    }
    return 0;
}




