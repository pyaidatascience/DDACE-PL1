/* If cost price & selling price of an item is input through the keyboard,
write a program to determine whether the seller has made profit or incured
loss. Also determine how much profit he made or loss he incured*/
#include<stdio.h>
int main()
{
	float cp, sp, p,l;
	printf("\n Enter cost price\t:");
	scanf("%f",&cp);
	printf("\n Selling price \t:");
	scanf("%f",&sp);
	
	p =sp - cp;
	l = cp - sp;
	if (p>0)
		printf("\nProfit of Rs. %f",p);
	if (l>0)
		printf("\n Loss of Rs. %f",l);
	if (p==l)
		printf("\n No loss no profit");
	return 0;
}
