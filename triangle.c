#include<stdio.h>
int main(){
    int i,A,B,C,D;
    scanf("%d%d%d%d",&A,&B,&C,&D);
    if(A < B + C && B < A + C && C < A + B){
        printf("S\n");
    }else if(A < B + D && B < A + D && D < A + B){
        printf("S\n");
    }else if(C < B + D && B < C + D && D < C + B){
        printf("S\n");
    }else if(C < A + D && A < C + D && D < C + A){
        printf("S\n");
    }else{
        printf("N\n");
    }
    return 0;
}

