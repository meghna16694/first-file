
#include<stdio.h>

int main(){

int num;
int first = 0;
int second = 1;
int next;

printf("Enter Value : ");
scanf("%d",&num);



for ( int i = 0; i <= num; i++){
    if (i <= 1)
    {
        next = i;
    }
else{
    next = first + second;
    first = second;
    second = next; 
}
    printf("%d\n",next); 
    
} 
}