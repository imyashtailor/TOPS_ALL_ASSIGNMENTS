//Practical - 5 ---> Area of Rectangle
/*
	Area of Rectnagle Formula :- A = Width * Length;
*/

#include<stdio.h>

int main(){
	//varaible declaration
	float w,l,area;
	
	//output print to take user input
	printf("Enter the Width :");
	scanf("%f",&w);
	
	printf("Enter the length :");
	scanf("%f",&l);
	
	//calculation of area of rectangle
	area = w * l;
	printf("Area of Rectangle is: %.f",area);
	
	return 0;
}