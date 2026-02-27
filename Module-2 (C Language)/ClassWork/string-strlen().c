/*
	Find the string length using strlen() function
*/

#include<stdio.h>
#include<string.h>

int main(){
	char str[10],str1[10];
	
	printf("Enter the String: ");
	gets(str1);
//	puts(str1);
	
	printf("Length of string: %d",strlen(str1));
	
	return 0;
}