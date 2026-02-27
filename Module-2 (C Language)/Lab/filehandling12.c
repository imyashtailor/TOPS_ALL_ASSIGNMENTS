/*
	Aim :- Write a C program to create a file, write a string into it, close the file, then 
		   open the file again to read and display its contents. 
*/

#include<stdio.h>
int main()
{
	FILE *fp;
	char data[50],ch;
	fopen("sample.txt","w");
	
	if(fp==NULL){
		printf("Something went wrong!...");
	}
	fprintf(fp, "%s", "Welcome to our file handling process");
	fclose(fp);
	
	//read from the file
	fp = fopen("sample.txt","r");
	fscanf(fp,"%s",data);
	fprintf("\n Reading data from files = %s",data);
	
	//read and display file content
	while((ch=fgetc(fp))!=EOF){
		printf("%c",ch);
	}
	fclose(fp);
	return 0;
}