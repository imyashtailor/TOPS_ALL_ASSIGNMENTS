//Practical Task 4 --- Area of Circle
//Area of circle formula
/*
	formula :- A = Pi*r*r
*/


#include<stdio.h>


int main(){
	//varaible declare
	float area;
	float pi = 3.14,r;
	
	printf("Enter the Radius: ");
	scanf("%f",&r);
	
	//calculations of area of cirlce
	area = pi*r*r;
	printf("Area of cirlce is: %.2f",area);
	return 0;
}