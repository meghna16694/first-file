#include <stdio.h>

int main() {
  int arr[3][3]; 

  
  for(int i=0; i<=2;i++){
      for(int j=0; j<=2;j++){
          printf("ENTER VALUE : ");
          scanf("%d",&arr[i][j]);
          
      }
          
         
      }
for(int i=0; i<=2;i++){
    int sum=0;
     for(int j=0; j<=2;j++){
         sum+=arr[j][i];
         
     }

printf("\n");


printf("%d",sum);
}
}