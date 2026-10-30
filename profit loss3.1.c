#include<stdio.h>
//Calculate profit or loss

int main()
{
	float cp, sp, p, l;
	printf("Enter here Cost price\t:");
	scanf("%f",&cp);
	printf("What is Salling price\t:");
	scanf("%f",&sp);
	//calculations
	p = sp-cp;
	l = cp -sp;
	if (p>0)
		printf("Profit = %f\n",p);
	if (l>0)
		printf("Loss = %f\n",l);
	if (p==0)
		printf("No Loss No Profit\n");
	
	return 0;
}
