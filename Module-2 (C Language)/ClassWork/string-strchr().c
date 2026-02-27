/*
	strchr():- it is used to locate first occurrence of a specified character of a string.
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	char ch;
	char *ptr;
	
	printf("Enter the string: ");
	gets(str);
	
	printf("Enter the string you want to search a specified position: ");
	scanf("%c",&ch);
	
	ptr = strchr(str,ch);
	
	if(ptr!=NULL){
		printf("Character '%c' is found at the position: %d",ch,ptr-str);
	}else{
		printf("Character '%c' is not found at the position.",ch);
	}
	return 0;
}