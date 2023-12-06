#include <stdio.h>

int main()
{
	
    int n;

  printf("Enter Number: ");
    scanf("%d",&n);

    int i = n;

    while (i > 0)
     {
          if(i % 2 != 0)
          {
               printf("%d ",i);
          }

          i--;
     }
}