#include <stdio.h>

int main() {
  int arr[3][3]; 

 
  for(int i=0; i<=2;i++){
      for(int j=0; j<=2;j++){
          printf("ENTER VALUE : ");
          scanf("%d",&arr[i][j]);
          
      }
          
      }
      int sum=0;
for(int i=0; i<=2;i++){
    
     for(int j=0; j<=2;j++){
         if(i==j){
               sum +=arr[i][j];
          }
     }
         printf("\n");
      
     }
    printf("%d",sum);
}