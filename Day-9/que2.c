#include<stdio.h>


int main(){

    int a;

    printf("Enter the number of unit: ");
    scanf("%d",&a);

    if (a <= 50) {
        printf("Charges wiil be %d",a*1+20);
    } else if (a <= 100) {
        printf("Cahrges will be %d", ((a-100)*2 )+20);
    } else if (a <= 200) {
        printf("Charges will be %d" ,((a-200)*3)+20 );
    } else if ( a >=250){
        printf("Charges will be %d" , ((a-250)*4)+20);
    } else {
        printf("No charges");
    }

    
}