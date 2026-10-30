#include<stdio.h>
#include<stdlib.h>

// Find out the use input number is even or odd
int main(void)
{
	int a;
	printf("Enter your number here\t:");
	scanf("%d",&a);
	if (a%2==0)
	printf("Even number");
	else
	printf("Odd number");
	return 0;
}
