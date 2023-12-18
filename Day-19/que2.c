#include<stdio.h>

int main(){
    int arr[3][3];
    int sum=0;
   
    
    

    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("Enter Value: ");
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            
     sum=sum +arr[i][j];

     
}

    }
    
       printf("%d",sum);
    
  
}