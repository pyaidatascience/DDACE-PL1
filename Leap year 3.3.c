#include<stdio.h>
// check leap year

int main()
{
	int year;
	printf("\nEnter year\t:");
	scanf("%d",&year);
	if (year%100==0)
	{
		if (year%400==0)
			printf("Leap Year\n");
		else
			printf("Not leap year\n");
	}
	else
	{
		if (year%4==0)
			printf("Leap year\n");
		else
			printf("Not leap year\n");
	}
	return 0;
}
