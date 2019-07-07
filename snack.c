#include<stdio.h>
int main(){
    int X,Y;
    float result;
    scanf("%d",&X);
    scanf("%d",&Y);
    switch(X){
        case 1:
            result = Y * 4.00;
            printf("Total: R$ %.2f\n",result);
            break;
        case 2:
            result = Y * 4.50;
            printf("Total: R$ %.2f\n",result);
            break;
        case 3:
            result = Y * 5.00;
            printf("Total: R$ %.2f\n",result);
            break;
        case 4:
            result = Y * 2.00;
            printf("Total: R$ %.2f\n",result);
            break;
        case 5:
            result = Y * 1.50;
            printf("Total: R$ %.2f\n",result);
            break;
        default:
            printf("Input Error!\n");
    }
    return 0;
}

