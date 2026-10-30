#include <stdio.h>
//find positive number and check odd or even

int main()
{
	int num;
	printf("Enter number\t:");
	scanf("%d",&num);
	if (num>0)
	{
		if (num%2==0)
		printf("Positive even");
		else
		printf("positive odd");
		
	}
	else
	printf("Number is not positive");
	return 0;
}
