/* While purchasing certain items, a discount of 10% is offered
if the quantity purchased is more than 1000. If quantity and price per 
item are input through the keyboard, write a program to calculate the total
expencess */
#include<stdio.h>
int main()
{
	int qty, dis;
	float total, rate;
	printf("Enter here price/rate:");
	scanf("%f",&rate);
	printf("\nEnter here quantity");
	scanf("%d",&qty);
	if (qty>=1000)
		dis =10;
	else
		dis = 0;
	
	total = (rate*qty)- (qty*rate*dis/100);
	printf("Expences :%f",total);
	
	return 0;
}
