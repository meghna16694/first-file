#include<stdio.h>

int main(){
    
    int a,b;

    printf("Enter value of first number\n");
    scanf("%d",&a);

    
    printf("Enter value of second number\n");
    scanf("%d",&b);

    if (b<a){
        printf ("The minimum Value is %d", b);

        
    }else{ printf("The maximum Value is %d" , a);

    }
}