#include<stdio.h>

int main(){
    int box[6];

    for(int i=0;i<=5;i++){
        printf("Enter Value: ");
        scanf("%d",&box[i]);
    }

    for(int i=5;i>=0;i--){
        printf("%d\n",box[i]);
    }
}