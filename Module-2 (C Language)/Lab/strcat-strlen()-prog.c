/*
	Aim :- Write a C program that takes two strings from the user and concatenates them using strcat(). 
	Display the concatenated string and its length using strlen(). 
*/

#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	char ch[20];
	
	printf("Enter the string 1: ");
	gets(str);
	
	printf("Enter the string 2: ");
	gets(ch);
	
	strcat(str,ch);
	
	printf("\nConcatenate the strings: %s",str);
	printf("\nLength of string:%d",strlen(str));
	return 0;
}