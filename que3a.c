#include<stdio.h>

int main(){
    int a;

    printf("Enter any value of a\n");

    scanf("%d",&a);


    if(a<0){
        printf("a is nagative\n");
    } else if (a==0) {
        printf("This number is Neutral");

    } else{
        printf("This number is Positive");
    }
}