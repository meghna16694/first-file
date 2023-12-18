#include <stdio.h>

int main() {
   int arr[5][5];
   
   for(int i=0;i<=4;i++){
       for(int j=0;j<=4;j++){
      printf("Enter Value: ");
      scanf("%d",&arr[i][j]);
           
       }
   }
   int sum=0;
   for(int i=0;i<=4;i++){
       for(int j=0;j<=4;j++){
           if(arr[i][j]%2!=0){
               
               sum=sum+arr[i][j];
               printf("%d\n",sum);
           }
          
       }
   }

}