#include<stdio.h>
int main(){
    int i,j,L;
    float M[3][3],sum,x,count;
    char O;
   // scanf("%d",&L);
    scanf(" %c",&O);
    for(i = 0; i < 3 ; i++){
        for(j = 0; j < 3; j++){
            scanf("%f",&M[i][j]);
        }
    }
    //for input check print
//    for(i = 0; i < 3 ; i++){
//        for(j = 0; j < 3; j++){
//            printf("%f",M[i][j]);
//        }
//    }
    //
    for(i = 0; i < 3; i++){
        for( j = i + 1; j < 3; j++){
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
