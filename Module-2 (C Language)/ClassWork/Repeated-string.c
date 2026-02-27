/*
	Aim :- write a c program to find repeated letters

	output:-
	Enter the string :- programming
	Repeated Letter :- rmg
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,j;
	
	printf("Enter the string => ");
	fgets(str,sizeof(str),stdin);
	
	printf("Repeated Letters => ");
	
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' ' || str[i]=='\n'){
			continue;
		}
		
		for(j=i+1;str[j]!='\0';j++){
			if(str[i]==str[j]){
				printf("%c",str[i]);
				break;	
			}
		}
	}
	return 0;
}