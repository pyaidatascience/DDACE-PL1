#include<stdio.h>
//Check user input is even or odd

int main()
{
	int n;
	printf("\nEnter any number");
	scanf("%d",&n);
	if (n%2==0)
		printf("Even\n");
	else
		printf("Odd\n");
	
	return 0;
	
}
