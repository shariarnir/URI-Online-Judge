#include<stdio.h>
#include<limits.h>
int main(){
    int i,PA,PB,T,j;
    double G1,G2;
    scanf("%d",&T);
    for(i = 1; i <= T; i++){
        scanf("%d %d %lf %lf",&PA,&PB,&G1,&G2);
        for(j = 1; j < INT_MAX; j++){
            PA = PA + (PA * (G1/100));
            PB = PB + (PB * (G2/100));
            if(j > 100){
                printf("Mais de 1 seculo.\n");
                break;
            }
            else if(PA > PB){
                printf("%d anos.\n",j);
                break;
            }
        }
    }
    return 0;
}
