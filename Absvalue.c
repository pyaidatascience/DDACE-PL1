#include<stdio.h>
int main()
{
	int num;
	printf("Input number");
	scanf("%d",&num);
	if (num<0)
		num = -num;
		
	printf("Ab Value:%d",num);
	return 0;
}
