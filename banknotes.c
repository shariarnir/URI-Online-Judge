#include<stdio.h>
int main(){
    int N,result,mod_val;
    scanf("%d",&N);
    if(N > 0 && N < 1000000){
        if(N == 1){
            printf("%d\n",N);
            printf("0 nota(s) de R$ nota(s) de R$ 100,00\n",N);
            printf("0 nota(s) de R$ nota(s) de R$ 50,00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 20,00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 10,00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 5,00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 2,00\n");
            printf("%d nota(s) de R$ nota(s) de R$ 1,00\n",N);
        }
        else if( N >= 2 && N < 5){
            printf("%d\n",N);
            printf("0 nota(s) de R$ nota(s) de R$ 100,00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 50,00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 20,00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 10,00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 5,00\n");

            result = N / 2;
            mod_val = N % 2;
            printf("%d nota(s) de R$ nota(s) de R$ 2,00\n",result);
            result = mod_val / 1;
            mod_val = mod_val % 1;
            printf("%d nota(s) de R$ nota(s) de R$ 1,00\n",result);
        }
        else if( N >= 5 && N < 10){
            printf("%d\n",N);
            printf("0 nota(s) de R$ nota(s) de R$ 100,00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 50,00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 20,00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 10,00\n");
            result = N / 5;
            mod_val = N % 5;
            printf("%d nota(s) de R$ nota(s) de R$ 5,00\n",result);
            result = mod_val / 2;
            mod_val = mod_val % 2;
            printf("%d nota(s) de R$ nota(s) de R$ 2,00\n",result);
            result = mod_val / 1;
            mod_val = mod_val % 1;
            printf("%d nota(s) de R$ nota(s) de R$ 1,00\n",result);
        }
        else if( N >= 10 && N < 20){
            printf("%d\n",N);
            printf("0 nota(s) de R$ nota(s) de R$ 100,00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 50,00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 20,00\n");
            result = N / 10;
            mod_val = N % 10;
            printf("%d nota(s) de R$ nota(s) de R$ 10,00\n",result);
            result = mod_val / 5;
            mod_val = mod_val % 5;
            printf("%d nota(s) de R$ nota(s) de R$ 5,00\n",result);
            result = mod_val / 2;
            mod_val = mod_val % 2;
            printf("%d nota(s) de R$ nota(s) de R$ 2,00\n",result);
            result = mod_val / 1;
            mod_val = mod_val % 1;
            printf("%d nota(s) de R$ nota(s) de R$ 1,00\n",result);
        }
        else if( N >= 20 && N < 50){
            printf("%d\n",N);
            printf("0 nota(s) de R$ nota(s) de R$ 100,00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 50,00\n");
            result = N / 20;
            mod_val = N % 20;
            printf("%d nota(s) de R$ nota(s) de R$ 20,00\n",result);
            result = mod_val / 10;
            mod_val = mod_val % 10;
            printf("%d nota(s) de R$ nota(s) de R$ 10,00\n",result);
            result = mod_val / 5;
            mod_val = mod_val % 5;
            printf("%d nota(s) de R$ nota(s) de R$ 5,00\n",result);
            result = mod_val / 2;
            mod_val = mod_val % 2;
            printf("%d nota(s) de R$ nota(s) de R$ 2,00\n",result);
            result = mod_val / 1;
            mod_val = mod_val % 1;
            printf("%d nota(s) de R$ nota(s) de R$ 1,00\n",result);
        }
        else if( N >= 50 && N < 99){
            printf("%d\n",N);
            printf("0 nota(s) de R$ nota(s) de R$ 100,00\n");
            result = N / 50;
            mod_val = N % 50;
            printf("%d nota(s) de R$ nota(s) de R$ 50,00\n",result);
            result = mod_val / 20;
            mod_val = mod_val % 20;
            printf("%d nota(s) de R$ nota(s) de R$ 20,00\n",result);
            result = mod_val / 10;
            mod_val = mod_val % 10;
            printf("%d nota(s) de R$ nota(s) de R$ 10,00\n",result);
            result = mod_val / 5;
            mod_val = mod_val % 5;
            printf("%d nota(s) de R$ nota(s) de R$ 5,00\n",result);
            result = mod_val / 2;
            mod_val = mod_val % 2;
            printf("%d nota(s) de R$ nota(s) de R$ 2,00\n",result);
            result = mod_val / 1;
            mod_val = mod_val % 1;
            printf("%d nota(s) de R$ nota(s) de R$ 1,00\n",result);
        }
        else{
            printf("%d\n",N);
            result = N / 100;
            mod_val = N % 100;
            printf("%d nota(s) de R$ nota(s) de R$ 100,00\n",result);
            result = mod_val / 50;
            mod_val = mod_val % 50;
            printf("%d nota(s) de R$ nota(s) de R$ 50,00\n",result);
            result = mod_val / 20;
            mod_val = mod_val % 20;
            printf("%d nota(s) de R$ nota(s) de R$ 20,00\n",result);
            result = mod_val / 10;
            mod_val = mod_val % 10;
            printf("%d nota(s) de R$ nota(s) de R$ 10,00\n",result);
            result = mod_val / 5;
            mod_val = mod_val % 5;
            printf("%d nota(s) de R$ nota(s) de R$ 5,00\n",result);
            result = mod_val / 2;
            mod_val = mod_val % 2;
            printf("%d nota(s) de R$ nota(s) de R$ 2,00\n",result);
            result = mod_val / 1;
            mod_val = mod_val % 1;
            printf("%d nota(s) de R$ nota(s) de R$ 1,00\n",result);
        }
    }
    else{
        printf("%d\n",N);
        printf("Invalid!!!Input is out of valid range!!!\n");
    }
    return 0;
}
