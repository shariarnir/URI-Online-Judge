#include<stdio.h>
int main(){
    int i,n,amount,count = 0,count_c = 0,count_r = 0,count_s = 0;
    double aver_c = 0,aver_r = 0,aver_s = 0;
    char ch;
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        scanf("%d",&amount);
        scanf(" %c",&ch);
        count = count + amount;
        if(ch == 'C'){
           count_c = count_c + amount;
        }
        else if(ch == 'R'){
           count_r = count_r + amount;
        }
        else if(ch == 'S'){
           count_s = count_s + amount;
        }
    }
    aver_c = (count_c /(count * 1.0)) * 100;
    aver_r = (count_r/(count * 1.0)) * 100;
    aver_s = (count_s/(count * 1.0)) * 100;
    printf("Total: %d cobaias\n",count);
    printf("Total de coelhos: %d\n",count_c);
    printf("Total de ratos: %d\n",count_r);
    printf("Total de sapos: %d\n",count_s);

    printf("Percentual de coelhos: %.2lf %%\n",aver_c);
    printf("Percentual de ratos: %.2f %%\n",aver_r);
    printf("Percentual de sapos: %.2f %%\n",aver_s);

    return 0;
}
