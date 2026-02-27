/*
	Aim :- Write a C program that takes a string from the user and counts the number of vowels and 
consonants in the string. 
• Challenge: Extend the program to also count digits and special characters. 	
*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char str[20];
	int count = 0,consonent=0,digit=0,special=0;
	
	printf("Enter the strings: ");
	gets(str);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I'
		|| str[i]=='O' || str[i]=='U'){
			printf("\n%c",str[i]);
			count++;
		}
		else if(isalpha(str[i])){
			consonent++;
		}
		else if(isdigit(str[i])){
			digit++;
		}
		else if(str[i]!=' ' && str[i]!='\n'){
			special++;
		}
	}
	printf("\nTotal Vowels are = %d",count);
	printf("\nConsonent = %d",consonent);
	printf("\nDigit = %d",digit);
	printf("\nSpecial Character = %d",special);
	return 0;
}