#include<stdio.h>
int main(){
    int s,e,total;
    scanf("%d %d",&s,&e);
    if( s < 12 && e > 12 ){
        total = e - s;
        printf("O JOGO DUROU %d HORA(S)\n",total);
    }else{
         total = ( 24 - s ) +  e;
         printf("O JOGO DUROU %d HORA(S)\n",total);
    }

   return 0;
}
