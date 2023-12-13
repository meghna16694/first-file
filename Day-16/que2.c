#include <stdio.h>

int main() {
    for (int row=5;row>=1;row--){
        
        for(int s=2;s<=row;s++){
            printf("_ ");
        }
        for(int col=row;col<=5;col++){
            printf("%d ",col);
        }
        
        printf("\n");
    }
    
}