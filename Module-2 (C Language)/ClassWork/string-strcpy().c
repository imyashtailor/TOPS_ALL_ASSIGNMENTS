/*
	strcpy() function :- copy string to the another
	there are two main things :-
	source and destination
*/
#include<stdio.h>
#include<string.h>

int main()
{
	char str[20],copy[20];
	
	printf("Enter the String: ");
	gets(str);
	
	strcpy(copy,str);
	
	printf("Copy string => %s",copy);
	return 0;
}