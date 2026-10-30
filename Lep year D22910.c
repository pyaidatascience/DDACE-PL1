/*Any year input through keybood, Write a program to determine whether 
the year is leap year or not*/
#include<stdio.h>
int main()
{
	int year;
	printf("Enter year\n");
	scanf("%d",&year);
	if (year%100==0)
	{
	
		if (year%400==0)
			printf("Leap year\n");
	}
	else
	{
		if (year%4==0)
			printf("Leap year\n");
		else
			printf("No leap year");
		
	}	
			
	
	
	return 0;
}
