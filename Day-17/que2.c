#include <stdio.h>

int main() {
int box[10];

for(int i=0;i<=9;i++){
    printf("Value :");
    scanf("%d",&box[i]);
}

int sum=0;

for (int i=0;i<=9;i++){
  sum+=box[i];  
}

printf("%d",sum);


}