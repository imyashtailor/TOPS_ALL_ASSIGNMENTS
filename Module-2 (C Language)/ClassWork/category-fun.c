//Category-function
/*
	four types of category-function
	
	1.) Without returntype without parameter
	2.) With return type with parameter
	3.) With return type and with parameter
	4.) With return type without parameter
*/

#include<stdio.h>
//1. without returntype without parameter
void display(){
	printf("\n Hello World");
}

//2. with return type with parameter
void add(int a, int b){
	printf("\nAddition of %d and %d = %d",a,b,a+b);
}

//3. with return type and with parameter
float areaCircle(int r){
	float a=3.14*r*r;
	return a;
}

//4. with return type without parameter
int square(){
	int num;
	printf("\n Enter num: ");
	scanf("%d",&num);
	return num*num;
}

main()
{
	display(); //calling
	add(50,50);
	float area = areaCircle(3);
	printf("\n area of circle = %f",area);
	printf("\n square = %d",square());
}