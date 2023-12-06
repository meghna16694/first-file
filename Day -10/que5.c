#include<stdio.h>
int main()
{
	

	int a,b ,i;

	printf("Enter first year : ");
	scanf("%d",&a);

	printf("Enter second year : ");
	scanf("%d",&b);

	i = a;

	while (i <= b) {
		if (i %4 == 0) {
			printf("%d\n",i);
		}

		i++;
	}


}