//reverse number

#include<stdio.h>

int main()
{
	int num,rem,rev;
	
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	while(num !=0){
		rem = num % 10;
		num = num / 10;
		
		//formula
		rev = rev * 10 + rem;
	}
	printf("\n rev = %d",rev);
	
	return 0;
}