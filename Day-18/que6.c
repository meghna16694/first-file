#include<stdio.h>

int main(){
     int n1;
     int n2;
     
     printf("Enter first year: ");
     scanf("%d",&n1);
     
     printf("Enter second year: ");
     scanf("%d",&n2);
     
     for(int i=n1;i<=n2;i++){
         
         if(i%4==0)
         printf("%d\n",i);
     }
} 