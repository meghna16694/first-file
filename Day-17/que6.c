#include <stdio.h>

int main(){
int box1[6];

for(int i=0;i<=5;i++){
    printf("Enter box1 Value:");
    scanf("%d",&box1[i]);
    
}

int box2[6];

for(int i=0;i<=5;i++){
    printf("Enter box2 Value:");
    scanf("%d",&box2[i]);
    
}
int box3[6];
for(int i=0;i<=5;i++){
    box3[6]=box1[i]+box2[i];
       printf("%d\n",box3[6]); 
    
}

}