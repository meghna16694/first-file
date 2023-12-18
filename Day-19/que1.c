#include<stdio.h>

int main(){
    int maxsize=100;
    int arr[maxsize][maxsize];
    int sum=0;
    int row,col=0;
    int fainal;
    
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

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            
     sum=sum +arr[i][j];
     
     fainal=col*row;

     
}

    }
    
       printf("%d",sum/fainal);
    
  
}