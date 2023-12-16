#include <stdio.h>

int main() {
  int box[6];
    int store;
  
  for(int i=0;i<=5;i++){
      printf("Enter Value : ");
      scanf("%d",&box[i]);
  }

  for(int i=0;i>=5;i++){
      if(store>box[i]){
          store=box[i];
      }
  }
  
  printf("%d\n",store);
}