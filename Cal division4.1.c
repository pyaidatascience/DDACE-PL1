/* Calculate division obtained by student
Method I */
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,per;
	printf("Enter marks of five subjects:");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	
	per=(m1+m2+m3+m4+m5)*100/500;
	printf("Percentage is\t:%d",per);
	
	if (per>=60)
	
		printf("First Division\n");
	else
	{
		if (per>=50)
			printf("Second Division\n");
		else
		{
			if (per>=40)
				printf("Third Division\n");
			else
				printf("Better luck next time\n");
		
		}
		
			
		
		
	}
		
	return 0;
}
