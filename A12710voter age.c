/*Find the voter eligibility*/
#include<stdio.h>
int main()
{
	int age,diff;
	printf("What is your age?\t:");
	scanf("%d",&age);
	//Use if statement to check condition
	if (age>=18)
		printf("Eligible to vote");
	else
	{
		diff = 18-age;
		printf("Will be eligible after %d",diff);
	}
		printf("Not eligible");
	return 0;
}
