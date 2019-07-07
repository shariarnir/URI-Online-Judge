#include<stdio.h>
int main(){
    int a,b,c,e,f;
    char first[20];
    char second[20];
    char third[20];
    scanf("%s %s %s",first,second,third);
    a = strcmp(first,"vertebrado");
    b = strcmp(second,"ave");
    c = strcmp(third,"onivoro");
    e = strcmp(second,"inseto");
    f = strcmp(third,"hematofago");

    if(a == 0){
        if(b == 0){
            if(c == 0){
                printf("pomba\n");

            }else{
                printf("aguia\n");
            }
        }else{
            if(c == 0){
                printf("homem\n");
            }else{
                printf("vaca\n");
            }
        }
    }else{
        if(e == 0){
            if(f == 0){
                printf("pulga\n");

            }else{
                printf("lagarta\n");
            }
        }else{
            if(f == 0){
                printf("sanguessuga\n");
            }else{
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
