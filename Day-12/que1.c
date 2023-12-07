#include <stdio.h>

int main() {
    int i = 1;
    int count = 0;

    while(i <= 80){
        if(i % 8 ==0){
            printf("%d\n",i);
            count++;
           
        }
        if (count == 5){
            break;
        }
         i++;
    }
}