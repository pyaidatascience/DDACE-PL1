#include<stdio.h>

//Find greate of two user input numbers

int main()
{
	int a,b;
	printf("Enter first number\t:");
	scanf("%d",&a);
	printf("\nEnter Second number\t:");
	scanf("%d",&b);
	if (a>b)
	printf("%d is greater",a);
	else
	printf("%d is greater",b);
	return 0;
}
