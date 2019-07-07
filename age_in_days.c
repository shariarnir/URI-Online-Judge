#include<stdio.h>
int main(){
    int N,year,month,day;
    scanf("%d",&N);
    year  = N / 365;
    month =(N % 365) / 30;
    day = (N % 365) % 30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);
    return 0;
}

