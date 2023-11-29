#include<stdio.h>

int main(){

    int age;

    printf("Enter your age");
    scanf("%d",&age);

    if(age>18){
        printf("you can vote");
    }else if(age<18){
        printf("you can not vote");
    }else {
        printf("you can also vote");
    }
}