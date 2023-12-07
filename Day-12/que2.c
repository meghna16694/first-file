#include <stdio.h>

int main() {
    int i = 1;
    int count = 0;

    while(i <= 50){
        if(i % 2 == 0){
            printf("%d\n",i);
            count++;
           
        }
        if (count == 10){
            break;
        }
         i++;
    }
}