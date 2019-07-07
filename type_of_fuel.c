#include<stdio.h>
#include<limits.h>
int main(){
    int n,i,count_1 = 0,count_2 = 0,count_3 = 0;
    for(i = 0; i < INT_MAX; i++){
        scanf("%d",&n);
        if(n >= 1 && n <= 4){
            if(n == 1){
                count_1++;
            }
            else if(n == 2){
                count_2++;
            }
            else if(n == 3){
                count_3++;
            }else{
                printf("MUITO OBRIGADO\n");
                printf("Alcool: %d\n",count_1);
                printf("Gasolina: %d\n",count_2);
                printf("Diesel: %d\n",count_3);
                break;
            }
        }

    }
    return 0;
}
