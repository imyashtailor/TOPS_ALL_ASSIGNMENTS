/*
	Aim :- Aim :- Write a C program that takes N numbers from the user and stores them in an array. The program should then calculate and display the sum of all array elements. 
    
    output :- 
    Enter the number of elements: 5
    Enter 5 numbers:
    1 2 3 4 5
    Sum of the elements = 15
*/

#include<stdio.h>
int main()
{
	int n,row;
	int sum = 0;
	
	printf("Enter the Number of Elements: ");
	scanf("%d",&n);
	
	//array declare
	int a[n];
	
	printf("\nEnter %d Numbers: ");
	for(row=0;row<n;row++){
		scanf("%d",&a[row]);
	}
	
	//calculation of Addition
	for(row=0;row<n;row++){
		sum = sum + a[row];
	}
	printf("\nSum of the Elements: ",sum);
	return 0;
}