/*
	Scope examples 
	local,global and formal
*/

#include<stdio.h>
float pi=3.14; //Global Varaible

void display(){
	printf("\n in function pi = %f",pi);
}

void add(int a, int b){ //formal declaration 
	printf("\nAddition of %d and %d = %d",a,b,a+b);
}
int y = 100;
main(){
	{
		int x = 10;
		printf("\n inner block = %d",x); //Local Varaible	
	}
	add(100,200);
	display();
	printf("\nouter block=%d",y);
}