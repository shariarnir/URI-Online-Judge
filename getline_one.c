#include<stdio.h>
int main(){

    int i,m;
    char name[20];
    double average = 0;
    for(i = 0; i < 5; i++){
        gets(name);
        scanf("%d",&m);
        average = average + m;
    }
    average = average/3.0;
    printf("%.1lf\n",average);
    return 0;
}
