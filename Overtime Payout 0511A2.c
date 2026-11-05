/* Write a program to calculate overtime pay of 10 employees. Overtime is paid
paid at the rate of Rs.120/- per hour for every hour worked above 40
hours. Assume that emplyees do not work for fractional part of an hour
*/
# include<stdio.h>
int main()
{
	float payout;
	int hour, i=1;
	while (i<=10) /*Loop for only 10 Employees*/
	{
		printf("\n Enter no. of hours worked\t:");
		scanf("%d",&hour);
		if (hour>=40)
			payout =(hour-40)*120;
		else
			payout =0;
		printf("Hours=%d Overtime pay=Rs.%f\n",hour,payout);
		i++;
		
	}
	
	return 0;
}
