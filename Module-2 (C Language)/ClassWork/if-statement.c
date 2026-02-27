#include<stdio.h>

int main()
{
	int num;
	
	//output print 
	printf("Enter the Num:");
	scanf("%d",&num);
	
	//if statement
	if(num>0)
	{
		printf("\n Square of %d=%d",num,num*num);
	}
	return 0;
}