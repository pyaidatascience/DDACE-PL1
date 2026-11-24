//Find average marks obtained by a class of 30 students

#include<stdio.h>
int main()
{
	int avg,sum=0;
	int i;
	int marks[3]; // array declaration 
	for (i=0; i<=3;i++)
	{
		printf("Enter Marks\t:");
		scanf("%d",&marks[i]); //stores input data in array
	}
	for (i=0;i<=3;i++)
		sum =sum+marks[i];
	avg = sum/4;
	printf("Average marks=%d\n",avg);
	
	return 0;
}
