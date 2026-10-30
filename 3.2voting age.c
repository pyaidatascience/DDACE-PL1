#include<stdio.h>

int main()
{
	int age;
	printf("What is your age?\t:");
	scanf("%d",&age);
	if (age>=18)
	{
		printf("\nYou are eligible to vote");
	}
	return 0;
}
