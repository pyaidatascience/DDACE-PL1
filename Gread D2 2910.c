/* Calculate Students gread*/
#include<stdio.h>
int main()
{
	int per;
	printf("Enter your percentage:");
	scanf("%d",&per);
	if (per>60)
		printf("\nDistinction\n");
	else if (per>50)
		printf("First class");
	else if (per>40)
		printf("Second Class");
	else
		printf("Better Luck next time");
	
	return 0;
}
