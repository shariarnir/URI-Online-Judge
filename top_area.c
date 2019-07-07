#include<stdio.h>
int main(){
    int i,j,L;
    float M[6][6],sum,x,count;
    char O;
   // scanf("%d",&L);
    scanf(" %c",&O);
    for(i = 0; i < 6 ; i++){
        for(j = 0; j < 6; j++){
            scanf("%f",&M[i][j]);
        }
    }
    for(i = 0; i < 6; i++){
        for( j = i + 1; j < (6 - 1 - i); j++){
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



