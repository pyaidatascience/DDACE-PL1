#include<stdio.h>
int main()
{
	int i;
	printf("Enter your choice 1 or 2\t:");
	scanf("%d",&i);
	
	if (i==1)
	
		printf("More questions you ask, more you know\n");

	else
		if (i==2)
			printf("If you ask a question you are a fool for some time!\n");
		else
			printf("If you don't ask a question you are fool for a lifetime\n");
	return 0;
}
