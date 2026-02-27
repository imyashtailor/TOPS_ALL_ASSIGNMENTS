//if-else practical

#include<stdio.h>

int main()
{
	int age;
	
	//print the output in terminal
	printf("Enter the Age: ");
	scanf("%d",&age);
	
	//condition of if-else
	if(age>=18){
		printf("Eligible for voting");
	}
	else{
		printf("\n Not Eligible for voting");
	}
	
	return 0;
}