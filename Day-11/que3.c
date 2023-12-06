#include<stdio.h>

int main(){

    int a,i;

    printf("Enter number: ");
    scanf("%d",&a);

    i = 1;

    do{
        if (i % 2 == 0){
        printf("%d\n",i);
      
        
        }  
     i++;
    
    }while(i <= a);
}