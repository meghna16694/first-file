#include <stdio.h>

int main() {
int sum=1;

for(int row=1;row<=5;row++){
    for(int column=1;column<=row;column++){
        printf(" %d",sum);
        sum++;
    }
    
    printf("\n");
}


}