#include<stdio.h>

int main(){


    


    int num ,s;


   
    printf("Press 1 for English\n");
    printf("Press 2 for Hindi\n");
    printf("Press 3 for Gujarati\n");
    scanf("%d",&num);

   switch (num)
   {
   case 1: printf("English slected\n");

   printf("Press 1 for Internet Recharge\n");
   printf("Press 2 for Top-up Recharge\n");
   printf("Press 3 for Special Recharge\n");



   scanf("%d",&s);

   

   switch (s)
   {

    
   case 1: printf("You have  done Internet Recharge.\n");



   break;

   
  

    case 2: 
             printf("You have  done Top-up Recharge.");

    break;

    case 3: 
            printf("You have done Special Recharge.");

    break;
  
   }

 break;

  case 2:

   printf("Hindi Selected\n");
   printf("Internet Recharge ke liye 1 dabaiye\n");
   printf("Top-up Recharge ke liye 2 dabaiye\n");
    printf("Special Recharge ke liye 3 dabaiye\n");

   scanf("%d",&s);

 

    switch(s){

        case 1 : printf("Aapne safaltapurvak Internet Recharge kar liya he.\n");

               

        break;

        case 2 : printf("Aapne safaltapurvak Internet Recharge kar liya he.\n");
        

        break;

         case 3 : printf("Aapne safaltapurvak Internet Recharge kar liya he.\n");
         

        break;

    
  }

  break;



  case 3:

   printf("Gujarati selected\n");
   printf("Internet Recharge mate 1 dabavo\n");
    printf("Top-up Recharge mate 2 dabavo\n");
     printf("Special Recharge mate 3 dabavo\n");
   scanf("%d",&s);

  

  switch(s){

    case 1 : printf("Tame safaltapurvak Special Recharge karyu chhe.\n");
           
    break;

    case 2 : printf("Tame safaltapurvak Special Recharge karyu chhe.o\n");
           
             
    break;

    case 3 : printf("Tame safaltapurvak Special Recharge karyu chhe.\n");
           
    break;
  }
   
 
   }
}