/*
	the length of string in without strrev function
*/
#include<stdio.h>
int main()
{
	char str[20],rev[20];
	int i=0,j=0;
	
	printf("\n Enter string = ");
	gets(str);
	printf("\n str = %s",str);
	
	while(str[i]!='\0'){
		i++;
		
	}
	i--;
	printf("\n Length of string = %d",i);
	while(i>=0){
		rev[j] = str[i];
		i--;
		j++;
	}
	rev[j] = '\0';
	
	printf("\n strrev = %s",rev);
	return 0;
}