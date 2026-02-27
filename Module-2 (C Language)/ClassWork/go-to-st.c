//Go-to Statement

#include<stdio.h>
main()
{
	int num;
	
	printf("Enter the Number: ");
	scanf("%d",&num);
	 
	if(num % 2 == 0){
		goto Even;
	}else{
		goto Odd;
	}
	
	Even:{
		printf("\nnum is even");
		return;
	}
	Odd:{
		printf("\nnum is odd");
		return;
	}
}