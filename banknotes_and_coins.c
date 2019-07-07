#include<stdio.h>
#include<limits.h>
int main(){
    float N;
    int result,mod_val,i,j;
    scanf("%f",&N);
    int intpart = (int)N;
    float decipart = N - intpart;
   // printf("%d %f\n",intpart,decipart);
    float array[5] = {0.50,0.25,0.10,0.05,0.01};
//    for(i = 0; i < 5;i++){
//        printf("array[%d] : %.2f\n",i+1,array[i]);
//    }
    if(intpart >= 0 && intpart <= 1000000.00){
        printf("NOTAS:\n");
        if(intpart == 1){
            //printf("%d\n",intpart);
            printf("0 nota(s) de R$ nota(s) de R$ 100.00\n",intpart);
            printf("0 nota(s) de R$ nota(s) de R$ 50.00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 20.00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 10.00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 5.00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 2.00\n");
            printf("%d nota(s) de R$ nota(s) de R$ 1,00\n",intpart);
        }
        else if( intpart >= 2 && intpart < 5){
            //printf("%d\n",intpart);
            printf("0 nota(s) de R$ nota(s) de R$ 100.00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 50.00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 20.00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 10.00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 5.00\n");
            result = intpart / 2;
            mod_val = intpart % 2;
            printf("%d nota(s) de R$ nota(s) de R$ 2.00\n",result);
            result = mod_val / 1;
            mod_val = mod_val % 1;
//            printf("%d nota(s) de R$ nota(s) de R$ 1,00\n",result);
        }
        else if( intpart >= 5 && intpart < 10){
            //printf("%d\n",intpart);
            printf("0 nota(s) de R$ nota(s) de R$ 100.00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 50.00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 20.00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 10.00\n");
            result = intpart / 5;
            mod_val = intpart % 5;
            printf("%d nota(s) de R$ nota(s) de R$ 5.00\n",result);
            result = mod_val / 2;
            mod_val = mod_val % 2;
            printf("%d nota(s) de R$ nota(s) de R$ 2.00\n",result);
            result = mod_val / 1;
            mod_val = mod_val % 1;
//            printf("%d nota(s) de R$ nota(s) de R$ 1,00\n",result);
        }
        else if( intpart >= 10 && intpart < 20){
            //printf("%d\n",intpart);
            printf("0 nota(s) de R$ nota(s) de R$ 100.00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 50.00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 20.00\n");
            result = intpart / 10;
            mod_val = intpart % 10;
            printf("%d nota(s) de R$ nota(s) de R$ 10.00\n",result);
            result = mod_val / 5;
            mod_val = mod_val % 5;
            printf("%d nota(s) de R$ nota(s) de R$ 5.00\n",result);
            result = mod_val / 2;
            mod_val = mod_val % 2;
            printf("%d nota(s) de R$ nota(s) de R$ 2.00\n",result);
            result = mod_val / 1;
            mod_val = mod_val % 1;
        }
        else if( intpart >= 20 && intpart < 50){
            //printf("%d\n",intpart);
            printf("0 nota(s) de R$ nota(s) de R$ 100.00\n");
            printf("0 nota(s) de R$ nota(s) de R$ 50.00\n");
            result = intpart / 20;
            mod_val = intpart % 20;
            printf("%d nota(s) de R$ nota(s) de R$ 20.00\n",result);
            result = mod_val / 10;
            mod_val = mod_val % 10;
            printf("%d nota(s) de R$ nota(s) de R$ 10.00\n",result);
            result = mod_val / 5;
            mod_val = mod_val % 5;
            printf("%d nota(s) de R$ nota(s) de R$ 5.00\n",result);
            result = mod_val / 2;
            mod_val = mod_val % 2;
            printf("%d nota(s) de R$ nota(s) de R$ 2.00\n",result);
            result = mod_val / 1;
            mod_val = mod_val % 1;
        }
        else if( intpart >= 50 && intpart < 99){
            //printf("%d\n",intpart);
            printf("0 nota(s) de R$ nota(s) de R$ 100.00\n");
            result = intpart / 50;
            mod_val = intpart % 50;
            printf("%d nota(s) de R$ nota(s) de R$ 50.00\n",result);
            result = mod_val / 20;
            mod_val = mod_val % 20;
            printf("%d nota(s) de R$ nota(s) de R$ 20.00\n",result);
            result = mod_val / 10;
            mod_val = mod_val % 10;
            printf("%d nota(s) de R$ nota(s) de R$ 10.00\n",result);
            result = mod_val / 5;
            mod_val = mod_val % 5;
            printf("%d nota(s) de R$ nota(s) de R$ 5.00\n",result);
            result = mod_val / 2;
            mod_val = mod_val % 2;
            printf("%d nota(s) de R$ nota(s) de R$ 2.00\n",result);
            result = mod_val / 1;
            mod_val = mod_val % 1;
        }
        else{
            //printf("%d\n",intpart);
            result = intpart / 100;
            mod_val = intpart % 100;
            printf("%d nota(s) de R$ nota(s) de R$ 100.00\n",result);
            result = mod_val / 50;
            mod_val = mod_val % 50;
            printf("%d nota(s) de R$ nota(s) de R$ 50.00\n",result);
            result = mod_val / 20;
            mod_val = mod_val % 20;
            printf("%d nota(s) de R$ nota(s) de R$ 20.00\n",result);
            result = mod_val / 10;
            mod_val = mod_val % 10;
            printf("%d nota(s) de R$ nota(s) de R$ 10.00\n",result);
            result = mod_val / 5;
            mod_val = mod_val % 5;
            printf("%d nota(s) de R$ nota(s) de R$ 5.00\n",result);
            result = mod_val / 2;
            mod_val = mod_val % 2;
            printf("%d nota(s) de R$ nota(s) de R$ 2.00\n",result);
            result = mod_val / 1;
            mod_val = mod_val % 1;
        }

    float a;
        printf("MOEDAS:\n");
        printf("%d nota(s) de R$ nota(s) de R$ 1.00\n",result);
        for(i = 0; i < 5; i++){
            if(decipart >= array[i]){
                a = decipart/array[i];
                printf("%.0f nota(s) de R$ nota(s) de R$ %.2f\n",a,array[i]);
                decipart = decipart - array[i];
               // printf("Decipart: %.2f\n",decipart);
            }else{
                printf("0 nota(s) de R$ nota(s) de R$ %.2f\n",array[i]);
            }

        }
    }
//        if(decipart >= .50){
//                a = decipart/.50;
//                printf("%d nota(s) de R$ nota(s) de R$ 0.50\n",a);
//                if(decipart == .50){
//                     printf("0 nota(s) de R$ nota(s) de R$ 0.25\n");
//                     printf("0 nota(s) de R$ nota(s) de R$ 0.10\n");
//                     printf("0 nota(s) de R$ nota(s) de R$ 0.05\n");
//                     printf("0 nota(s) de R$ nota(s) de R$ 0.01\n");
//                }
//                decipart = decipart - .50;
//           }
//           if(decipart >= .25){
//
//                if(decipart == .25 ){
//                    printf("0 nota(s) de R$ nota(s) de R$ 0.10\n");
//                    printf("0 nota(s) de R$ nota(s) de R$ 0.05\n");
//                    printf("0 nota(s) de R$ nota(s) de R$ 0.01\n");
//                }
//                a = decipart/.25;
//                printf("%d nota(s) de R$ nota(s) de R$ 0.25\n",a);
//                decipart = decipart - .25;
//           }
//           if(decipart >= .10){
//                a = decipart/.10;
//                printf("%d nota(s) de R$ nota(s) de R$ 0.10\n",a);
//                if(decipart == .10){
//                    printf("0 nota(s) de R$ nota(s) de R$ 0.05\n");
//                    printf("0 nota(s) de R$ nota(s) de R$ 0.01\n");
//                }
//                decipart = decipart - .10;
//           }
//           if(decipart >= .05){
//                a = decipart/.05;
//                printf("%d nota(s) de R$ nota(s) de R$ 0.05\n",a);
//                if(decipart == .05){
//                    printf("0 nota(s) de R$ nota(s) de R$ 0.01\n");
//                }
//                decipart = decipart - .05;
//           }
//           if(decipart >= .01){
//                a = decipart/.01;
//                printf("%d nota(s) de R$ nota(s) de R$ 0.01\n",a);
//                decipart = decipart - 0.01;
//           }


    return 0;
}
