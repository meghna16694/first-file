#include<stdio.h>~



int  main(){

    int a,b,c,d;

    printf("Enter Value of A : ");
    scanf("%d",&a);

    printf("Enter Value of B : ");
    scanf("%d",&b);


    printf("Enter Value of C : ");
    scanf("%d",&c);

    printf("Enter Value of D : ");
    scanf("%d",&d);


    (a<b) ? (a<c) ? (a<d) ? printf("A is minimum%d",a) : printf("D is minimum%d",d)

    :(c<d) ? printf("C is minimum%d",c) : printf("D is minimum%d",d)

    :(b<c) ? (b<d) ? printf("b is minimum%d",b) : printf("D is minimum%d",d)

    :(c<d) ? printf("C is minimum%d",c) : printf("D is minimum%d",d);


}