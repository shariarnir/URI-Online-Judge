#include<stdio.h>
int main(){
      int i,n,max,count;
      for(i = 0; i < 100; i++){
        scanf("%d",&n);
        if(i < 1){
            max = n;
        }else if(max < n ){
            max = n;
            count = i;
        }
      }
      printf("%d\n",max);
      printf("%d\n",count+1);

//    FILE *f;
//    int i,j=0,num = 0,max,count = 0;
//    f = fopen("highest_and_position.txt","w");
//    if(f == NULL){
//        printf("File doesn't exist!\n");
//    }else{
//       // printf("File is open!\n");
//        for(i = 0; i < 100; i++){
//            putw(rand()%100+2,f);
//        }
//        //printf("file writern is successfully!");
//        fclose(f);
//    }
//
//    f = fopen("highest_and_position.txt","r");
//    if(f == NULL){
//        printf("File doesn't exist!\n");
//    }else{
//        //printf("File is open!\n");
//        max = getw(f);
//      //  printf("%d\n",max);
//        for(i = 0; (num =getw(f)) != EOF; i++){
//            //printf("%d ",num);
//            if(max < num){
//                max = num;
//                count = i;
//            }
//        }
//        printf("%d\n",max);
//        printf("%d\n",count);
//        fclose(f);
//    }


    return 0;
}
