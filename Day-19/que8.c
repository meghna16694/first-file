#include <stdio.h>

int main(){
  int maxsize=100;
  
  int arr[maxsize][maxsize];
  
  int row,col=0;
  
  printf("Enter size of row: ");
  scanf("%d",&row);
  
   printf("Enter size of col: ");
  scanf("%d",&col);
  
  for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
          printf("Enter Value: ");
          scanf("%d",&arr[i][j]);
      }
  }
  int sum1=0;
  
  for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
          if(i==j){
              sum1=sum1+arr[i][j];
          }
          
         
      }
    
  }
    // printf("%d ",sum1);
    
    int sum2=0;
    int n;
    
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            n=row-1;
            if(i+j==n){
                sum2=sum2+arr[i][j];
            }
        }
    }
    
    printf("%d",sum1+sum2);

}