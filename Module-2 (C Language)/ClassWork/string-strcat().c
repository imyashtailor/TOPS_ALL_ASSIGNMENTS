/*
	strcat() :- Append one string to another, creating a single string out of two.
	strcat() :- source and destination
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10];
	char str2[10];
	
	printf("Enter the string 1 => ");
	gets(str1);
	
	printf("\n Enter the string 2 => ");
	gets(str2);
	
	strcat(str1,str2);
	
	printf("Concatination of two strings: %s",str1);
	return 0;
}