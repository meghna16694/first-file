#include<stdio.h>

int main(){

    int a,b,c,d;

    printf("Enter Value of A: \n");
    scanf("%d",&a);

    printf("Enter Value of B: \n");
    scanf("%d",&b);

    printf("Enter Value of C: \n");
    scanf("%d",&c);

    printf("Enter Value of D: \n");
    scanf("%d",&d);


    if(a<b){
        if(a<c){
            if(a<d){
                printf("A is Minimum %d",a);
            } else{
                printf("D is Minimum%d",d);
            }
        }
    else{
        if(c<d){
            printf("C is Minimum %d",c);
        }
        else{
            printf("D is Minimum %d",d);
        }
    }

    }
    else{
        if(b<c){
            if(b<d)
            {

            
            printf("B is Minimum%d",b);
        } else {
            printf("D is Minimum%d",d);
        }
    }

    else{
        if(c<d){
            printf("C is Minimum%d",c);
        } else{
            printf("D is Minimum%d",d);
        }
    }

 
} 
}