/*If cost price and selling price of an item is input through the keyboard,
write a program to determine whether the seller has made profit or incured
loss. Also determine how much profit he made or loss he incured.*/

#include<stdio.h>
int main()
{
	float cp, sp,p,l;
	printf("\n Enter Cost price");
	scanf("%f",&p);
	printf("\n Enter here Salling price");
	scanf("%f",l);
	
	p = sp - cp;
	l = cp - sp;
	
	if (p>0)
		printf("Profit %f\n",p);
	if (l>00)
		printf("Loss %s\n",l);
	if (p ==0)
		printf("No loss no Profit\n");
		
	
	return 0;
}
