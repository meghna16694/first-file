#include <stdio.h>

int main() {
  for (int i = 1;i <= 30;i++){
      
      if(i % 3 == 0 && i % 5 == 0){
          printf("FIZZBUZZ\n");{
              continue;
          }
      }
      
      if(i % 3 ==0){
          printf("FIZZ\n");{
              continue;
          }
      }
      
      if(i % 5 == 0){
          printf("BUZZ\n");{
              continue;
          }
      }
      printf("%d\n",i);
  }
}