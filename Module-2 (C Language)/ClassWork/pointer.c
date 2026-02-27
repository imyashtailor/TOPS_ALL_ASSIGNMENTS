/*
	Pointer Example
*/

#include<stdio.h>
int main()
{
	int a = 10;
	int *ptr = &a; //pointer declaration
	printf("\n address = %p and value = %d",ptr,*ptr); //deref
	
	*ptr = 200;
	printf("\n a = %d",a);
	
	return 0;
}