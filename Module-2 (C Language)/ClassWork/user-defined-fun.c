/*
	User-defined functions
*/

#include<stdio.h>
void display();
void add(); //function declaration
float areaCircle(int);
main()
{
	display(); //calling
	add(10,20);
	float area = areaCircle(3);
	printf("\n area of circle = %f",area);
}

/*
	Syntax of void function

	return-type function name(p1,p2,p3){
		//block of code
	}
*/

void display()
{
	printf("Hello World!...");
}

void add(int a,int b)
{
	printf("\nAddition of %d and %d = %d",a,b,a+b);
}

float areaCircle(int r){
	float a=3.14*r*r;
	return a;
}