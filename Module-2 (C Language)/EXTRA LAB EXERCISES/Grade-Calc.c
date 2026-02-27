// Control Statement
/*
	Grade Calculator
	
	Write a C program that takes the marks of a student as input and displays the corresponding 
	grade based on the following conditions: 
=> Marks > 90: Grade A 
=> Marks > 75 and <= 90: Grade B 
=> Marks > 50 and <= 75: Grade C 
=> Marks <= 50: Grade D 
	 Use if-else or switch statements for the decision-making process. 
*/

#include<stdio.h>

int main()
{
	//variable Declaration
	int sub1,sub2,sub3,marks;
	
	//take the input from user
	printf("Enter the Marks of Maths: ");
	scanf("%d",&sub1);
	
	printf("Enter the Marks of Science: ");
	scanf("%d",&sub2);
	
	printf("Enter the Marks of History: ");
	scanf("%d",&sub3);
	
	//validate the input condition
	if(sub1 < 0 || sub1 > 100 ||
		sub2 < 0 || sub2 > 100 ||
		sub3 < 0 || sub3 > 100){
		printf("Invalid marks entered");
		
		return 0;
	}
	
	//calculation of main logic
	marks = (sub1 + sub2 + sub3) / 3;
	
	//using if-else statement
	if(marks > 90){
		printf("Grade A");
	}else if(marks > 75 && marks <= 90){
		printf("Grade B");
	}else if(marks > 50 && marks <= 75){
		printf("Grade C");
	}else if(marks <= 50){
		printf("Grade D");
	}
	return 0;
}

