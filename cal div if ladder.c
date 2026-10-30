/* else if ladder demo
program to print the division achived by the student
*/
#include<stdio.h>
int main()
{
	int per;
	printf("ENter your percentage\t:");
	scanf("%d",&per);
	
	if (per>=60)
		printf("\nDistinction");
	else if (per>=50)
		printf("\nFirst Class");
	else if (per>=40)
		printf("\nThird Class");
	else
		printf("\nBetter luct next time");
	
	return 0;
}
