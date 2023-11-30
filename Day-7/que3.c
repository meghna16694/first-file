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


    if(a>b){
        if(a>c){
            if(a>d){
                printf("A is greater %d",a);
            } else{
                printf("D is greter%d",d);
            }
        }
    else{
        if(c>d){
            printf("C is gretaer %d",c);
        }
        else{
            printf("D is greter %d",d);
        }
    }

    }
    else{
        if(b>c){
            if(b>d)
            {

            
            printf("B is greater%d",b);
        } else {
            printf("D is greater%d",d);
        }
    }

    else{
        if(c>d){
            printf("C is greater%d",c);
        } else{
            printf("D is greater%d",d);
        }
    }

 
} 
}
