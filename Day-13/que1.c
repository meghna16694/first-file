
#include<stdio.h>

int main(){
    
  int a;
  
  int fact = 1;
  
  printf("Enter any number: ");
  scanf("%d",& a);
  
  for( int i=1; i<=a; i++){
      fact *=i;
      
      printf("%d\n", fact);
  }

}