/* Calculate division secured by the students
Method II */
#include<stdio.h>

int main()
{
	int m1,m2,m3,m4,m5,per;
	printf("Enter five subjects marks :");
	scanf("%d %d %d %d %d",&m1,&m2, &m3,&m4,&m5);
	per =(m1+m2+m3+m4+m5)*100/500;
	printf("\nPercentage \t:%d\n",per);
	
	if (per>=60)
		printf("First Division\n");
	if ((per>=50) && (per<60))
		printf("Second Division\n");
	if ((per>=40) && (per<50))
		printf("Third Division\n");
	if (per<40)
		printf("Better luck next time");
		
	return 0;
}
