#include <stdio.h>

int main() {
int box[5];

for(int i=0;i<=4;i++){
    printf("Value : ");
    scanf("%d",&box[i]);
}

int sum=0;

for(int i=0;i<=4;i++){
    sum+=box[i];
}

printf("%d",sum/5);
}