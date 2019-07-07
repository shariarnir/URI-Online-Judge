#include<stdio.h>
#include<limits.h>
int main(){
    float i,j = 0,n,k = 0;
    float s,sum,c;
    for(i = 1; i <= 39; i+=2){
                s = s + (i / pow(2,j)) ;
                j++;
                k++;
//                if(sum == 39){
//                    j--;
//                    c = pow(2,j);
//                }
    }
    //printf("%.2f\n",c);
    printf("%.2f\n",s);
    return 0;
}
