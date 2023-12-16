#include<stdio.h>

int main(){
    int box[6];
    for(int i=0;i<=5;i++){
        printf("Enter Value: ");
        scanf("%d",&box[i]);
    }
    int store=0;
    for(int i=0;i<=5;i++){
        if(store<box[i]){
            store=box[i];
        }
    }

    printf("%d\n",store);
}