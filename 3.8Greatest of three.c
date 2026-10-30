#include<stdio.h>
//greatest of three numbers

int main()
{
	int a,b,c;
	printf("Frist number\t:");
	scanf("%d",&a);
	printf("\nSecond number\t:");
	scanf("%d",&b);
	printf("\nThird number\t:");
	scanf("%d",&c);
	if (a>b)
	{
		if (a>c)
		printf("%d is greatest",a);
		else
		printf("%d is greatest",c);
	}
	else
	{
		if (b>c)
		printf("%d is greatest",b);
		else
		printf("%d is greatest",c);
	}
	return 0;
}
