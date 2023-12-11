#include <stdio.h>

int main() {
    
    int m= 1;


for(int row=65;row<=70;row++){
    for(int column=70;column>=row;column--){
        printf(" %c",m);
        
        m--;
        
      
        
    }
    
    printf("\n");
}


}