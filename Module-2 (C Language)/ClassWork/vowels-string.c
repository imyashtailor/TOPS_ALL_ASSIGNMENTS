/*
	Aim :- write a c program to find a total vowels in a given string
	
	vowels :- a,e,i,o,u;
*/

#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char str[10];
	int count = 0;
	
	printf("Enter the String: ");	
	fgets(str,sizeof(str),stdin);
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o'|| str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
			printf("\n%c",str[i]); //printing each vowels
            count++;
        }else{
        	printf("It is a consonant");
		}
	}
	printf("\n Total Vowels are = %d",count);
	return 0;
}
