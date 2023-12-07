#include <stdio.h>

int main(){
    
   int i = 20;
   
   do{
       if( i == 24){
           i++;
           continue;
       }
       if(i % 2 == 0){
           printf("%d\n",i);
          }
        i++;
       
   }while(i <= 30);
}