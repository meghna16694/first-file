#include<stdio.h>

int main(){

    int n;

    printf("Enter number:");
    scanf("%d",&n);

    if(n % 1 ==n && n % n == 0){
        printf("The number is prime");
    }else{
        printf("The number is not prime");
    }
}