#include<stdio.h>

int main(){
    int maxsize=100;
    int arr[maxsize][maxsize];
    
    int row,col=0;
   
    
    printf("Enter size of row: ");
    scanf("%d",&row);
    
      printf("Enter size of col: ");
    scanf("%d",&col);
   
    
    
int sum=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter Value: ");
            scanf("%d",&arr[i][j]);
        }
    }
   
    int n;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
              n=row-1;
             if(i+j==n){
                 sum=sum+arr[i][j];
             }
              
    }
        
     
    }
      printf("%d",sum);
      
}