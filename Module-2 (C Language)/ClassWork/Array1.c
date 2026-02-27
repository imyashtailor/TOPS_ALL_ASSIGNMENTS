/*
	//Array 
	syntax :- datatype array_name[size];
	
	Write a C program that stores 5 integers in a one-dimensional array and prints them. 
Extend this to handle a two-dimensional array (3x3 matrix) and 
calculate the sum of all elements. 

Part-1 => Write a C program that stores 5 integers in a one-dimensional array and prints them. 
*/

#include<stdio.h>
int main()
{
	//array declaration
	int a[5] = {12,2,34,56,12};
	int i;
	
	for(i=0;i<5;i++){
		printf("\n a[%d] = %d",i,a[i]);
	}
	return 0;
}