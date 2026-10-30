/* Find leap year by using logical operator */
#include<stdio.h>
int main()
{
	int year;
	printf("Enter year :");
	scanf("%d",&year);
	if (year%400==0 || year%100!=0 && year%4==0)
		printf("Leap year");
	else
		printf("No leap year");
	
	return 0;
}
