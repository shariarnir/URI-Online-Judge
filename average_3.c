#include<stdio.h>
int main(){
    float N1,N2,N3,N4,extra,average,average_one;
    scanf("%f %f %f %f",&N1,&N2,&N3,&N4);
    average = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1))/10;
    printf("Media: %.1f\n",average);
    if( average >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if(average < 5.0){
        printf("Aluno reprovado.\n");
    }
    else if(average >= 5.0 && average <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%f",&extra);
        printf("Nota do exame: %.1f\n",extra);
            average_one = (average + extra)/2;
            if(average_one >= 5.0){
                printf("Aluno aprovado.\n");
                printf("Media final: %.1f\n",average_one);
            }
            else{
                printf("Aluno reprovado.\n");
                printf("Media final: %.1f\n",average_one);
            }

    }else{
        printf("Aluno reprovado.\n");
    }
    return 0;
}

