#include<stdio.h>

//Print numbers 10 to 20 using for loop

int main()
{
	int i;
	for (i=10; i<=20; i++)
	{
		if (i==15)
			break;
		printf("%d\n",i);
		 
	}
	
	return 0;
}
