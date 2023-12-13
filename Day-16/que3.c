#include <stdio.h>

int main() {
 
 for (int row=5;row>=1;row--){
     
     for(int s=4;s>=row;s--){
         printf(" ");
     }
     for(int col=1;col<=row;col++){
         printf("%d",col%2);
     }
     
     printf("\n");
 }

    
}