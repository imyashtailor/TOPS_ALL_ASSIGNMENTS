/*
	find the length of string without using strlen function
*/

#include<stdio.h>
int main()
{
	char str[20];
	int i=0;
	printf("\n Enter string: ");
	gets(str); //multi-world character ne read or print 
	printf("\n str = %s",str);
	
	while(str[i]!='\0'){
		i++;
	}
	
	printf("\n Length of string = %d",i);
	return 0;
}