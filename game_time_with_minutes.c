
//#include <stdio.h>
//
//int main()
//
//{
//
//    int st, sm, et, em, rm, rt;
//
//    scanf("%d %d %d %d", &st, &sm, &et, &em);
//
//    rt = et - st;
//
//    if (rt < 0)
//
//    {
//
//        rt = 24 + (et - st);
//
//    }
//
//    rm = em - sm;
//
//    if (rm < 0)
//
//    {
//
//        rm = 60 + (em - sm);
//
//        rt--;
//
//    }
//
//    if (et == st && em == sm)
//
//    {
//
//        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
//
//    }
//
//    else
//     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", rt, rm);
//
//
//
//    return 0;
//
//}

#include<stdio.h>
int main(){
    int initial_hour,initial_minute,final_hour,final_minute,result_1,result_2;

    scanf("%d %d %d %d",&initial_hour,&initial_minute,&final_hour,&final_minute);

    result_1 = final_hour - initial_hour;
    result_2 = final_minute - initial_minute;
    if(result_1 < 0){
        result_1 = (final_hour + 24) - initial_hour;
    }
    if(result_2 < 0){
        result_2 = (final_minute + 60) - initial_minute;
        result_1--;
    }
    if(initial_hour == final_hour && initial_minute == final_minute){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",result_1,result_2);
    }
    return 0;
}
//    if(final_hour > initial_hour &&  final_minute > initial_minute){
//        result = final_hour - initial_hour;
//        result_2 = final_minute - initial_minute;
//        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",result,result_2);
//    }
////    if(final_hour > initial_hour &&  final_minute < initial_minute){
////        result_2 = (final_minute + 60) - initial_minute;
////        result = final_hour - 1 - initial_hour;
////        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",result,result_2);
////    }
////    if(final_hour > initial_hour &&  final_minute == initial_minute){
////        result = final_hour - initial_hour;
////        result_2 = 0;
////        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",result,result_2);
////
////    }
////    if(initial_hour == final_hour && initial_minute == final_minute){
////            result = 24;
////            result_2 = final_minute - initial_minute;
////       printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",result,result_2);
////    }
////    if(initial_hour == final_hour && final_minute > initial_minute){
////        result = final_minute - initial_minute;
////        result_2 = 24;
////        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",result_2,result);
////    }
////    if(initial_hour == final_hour && final_minute < initial_minute){
////        result = (final_minute + 60) - initial_minute;
////        result_2 = 24 - 1;
////        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",result_2,result);
////
////    }
////    if(final_hour < initial_hour &&  final_minute > initial_minute){
////        result = (final_hour + 24) - initial_hour;
////        result_2 = final_minute - initial_minute;
////        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",result,result_2);
////    }
////    if(final_hour < initial_hour &&  final_minute < initial_minute){
////        result = final_hour + 24 - initial_hour;
////        result_2 = final_minute + 60 - initial_minute;
////        result--;
////        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",result,result_2);
////    }
////    if(final_hour < initial_hour &&  final_minute == initial_minute){
////        result = (final_hour + 24) - initial_hour;
////        result_2 = 0;
////        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",result,result_2);
////    }
//
