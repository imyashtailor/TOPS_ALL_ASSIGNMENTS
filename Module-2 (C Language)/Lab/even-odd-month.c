/*
Write a C program to check if a number is even or odd using an if-else 
statement. Extend the program using a switch statement to display the month 
name based on the user’s input (1 for January, 2 for February, etc.). 
*/

//Part 1 :- even or odd program
/*
even and odd formula :- num % 2  == 0
*/
#include<stdio.h>

int main()
{
	//variable declaration
	int num,month;
	
	printf("Enter the Number :");
	scanf("%d",&num);
	
	//if-else condition
	if(num%2==0)
	{
		printf("%d is Even Number",num);
	}else{
		printf("%d is Odd Number",num);
	}
	
	//part-2 :- month using switch statement
	printf("\n Enter the month number (1-12): ");
	scanf("%d",&month);
	
	switch(month){
		case 1:
			printf("Month : January");
		break;
		
		case 2:
			printf("Month : February");
		break;
		
		case 3:
			printf("Month : March");
		break;
		
		case 4:
			printf("Month : April");
		break;
		
		case 5:
			printf("Month : May");
		break;
		
		case 6:
			printf("Month : June");
		break;
		
		case 7:
			printf("Month : July");
		break;
		
		case 8:
			printf("Month : August");
		break;
		
		case 9:
			printf("Month : September");
		break;
		
		case 10:
			printf("Month : October");
		break;
		
		case 11:
			printf("Month : November");
		break;
		
		case 12:
			printf("Month : December");
		break;
		default:
			printf("Error!..Invalid Month Number");
	}
	return 0;
}