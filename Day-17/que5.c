#include <stdio.h>

int main(){
int box[6];

for(int i=0;i<=5;i++){
    printf("Value:");
    scanf("%d",&box[i]);
    
}

for(int i=0;i<=5;i++){
    if(box[i]%2==0){
        printf("%d\n",box[i]);
    }
}

}