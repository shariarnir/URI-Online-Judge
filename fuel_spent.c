#include<stdio.h>
int main(){
    int spent_time,average_speed;
    scanf("%d %d",&spent_time,&average_speed);
    double result = (spent_time * average_speed)/12.0;
    printf("%.3lf\n",result);
    return 0;
}
