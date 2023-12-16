#include<stdio.h>

int main(){

 
int maxSize=100;
 int size1 =0;
 int box1[maxSize];   
 
 
 printf("Enter size of box1: ");
 scanf("%d",&size1);
 
 
 
 for(int i=0;i < size1;i++){
     printf("Enter Value : ");
     scanf("%d",&box1[i]);
     
 }
 
 for(int i=0;i<size1;i++){
     printf("%d\n",box1[i]*box1[i]);
 }
} 