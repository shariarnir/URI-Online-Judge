#include<stdio.h>
#include<time.h>
int main(){
    //clock_t begin = clock();
    int i,N,X,count = 0,j;
    scanf("%d",&N);
    for(i = 0; i < N; i++){
        scanf("%d",&X);
        for(j = 1; j <= X; j++){
            if(X % j == 0){
                count++;
            }
        }
        if(count <= 2){
            printf("Prime\n");
        }else{
            printf("Not Prime\n");
        }
        count = 0;
    }
//    clock_t end = clock();
//    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
//    printf("%lf",time_spent);

    return 0;
}
