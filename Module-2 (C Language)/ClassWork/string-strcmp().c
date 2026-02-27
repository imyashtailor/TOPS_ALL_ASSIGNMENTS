/*
	strcmp():- compare the two strings if strings is match then function returns 0;
	strcmp(source,destination);
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];
	char s2[20];
	
	printf("Enter the string 1 => ");
	gets(s1);
	
	printf("Enter the string 2 => ");
	gets(s2);
	
	if(strcmp(s1,s2)==0){
		printf("The string is equal or match");
	}else{
		printf("The string is not match");
	}
	return 0;
}