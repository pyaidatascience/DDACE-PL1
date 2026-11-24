// Two Dimensional Arrays
#include<stdio.h>
int main()
{
	int stud[4][2];
	int i, j;
	for (i=0; i<=3; i++)
	{
		printf("Enter roll no \t:");
		scanf("%d",&stud[i][0]);
		printf("Enter marks\t:");
		scanf("%d",&stud[i][1]);
	}
	for (i=0; i<3; i++)
		printf("%d %d\n",stud[i][0],stud[i][1]);
	return 0;
}
