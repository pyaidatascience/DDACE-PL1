#include<stdio.h>

//printing multiplication table

int main()
{
	int num, i=1;
	printf("Which table to print\t:");
	scanf("%d",&num);
	do
	{
		printf("\n%d X %d = %d", num,i,num*i);
		i++;
	}
	while (i<=10);
	return 0;
}
