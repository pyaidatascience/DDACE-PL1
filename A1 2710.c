/*While purchasing certain items. a discount of 10% is offered 
if the quantity purchased is more than 1000. If quatity and price
 per item are input through the keyboard, Write the program to calculate
 total expences */
 #include<stdio.h>
 int main()
 {
 	int qty,dis;
 	float rate, total;
 	printf("Enter here quantity\t:");
 	scanf("%d",&qty);
 	printf("\nEnter here rate\t:");
 	scanf("%f",&rate);
 	//using if else statement
 	
	if (qty>1000)
 		dis =10;
 	else
 		{
 		dis=10;
 		printf("\nAs quantity is less sorry for discount");	
		}
 		
 	total =(qty*rate)-(qty*rate*dis/100);
 	printf("\nTotal Expences:%f",total);
 	
 	return 0;
 }
