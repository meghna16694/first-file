#include<stdio.h>

int main(){

    int a,b,c;

    printf("Enter value of a:  \n");
    scanf("%d",&a);

    printf("Enter value of b:  \n");
    scanf("%d",&b);

    printf("Enter value of c:  \n");
    scanf("%d",&c);

    if(a<b){
        if(a<c){
            printf("A is minimum%d",a);
        

    }else{
        printf("C is minimum%d",c);
    }

    }else{
        if(b<c){
            printf("B is minimum:%d",b);
        }else{
            printf("C is minimum:%d",c);
        }
    }

}
