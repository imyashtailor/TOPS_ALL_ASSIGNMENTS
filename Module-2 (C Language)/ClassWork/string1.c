/*
	String Program
*/

#include<stdio.h>
int main()
{
	char name[5] = {'y','a','s','h','\0'};
	char str[10], str1[10];
	
	printf("\n name = %s",name);
	printf("\n Enter the string: ");
	gets(str1);
	puts(str1);
	
	return 0;
}