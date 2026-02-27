/*
	File handling in c
	
	1) simple file handling
*/
#include<stdio.h>
int main()
{
	FILE *fp;
	char data[20];
	fp = fopen("test.txt","w");
	if(fp==NULL){
		printf("\n something wrong");
	}
	fprintf(fp,"%s","Hello World");
	fclose(fp);
	
	//data read using r command and fscanf() method
	fp = fopen("test.txt","r");
	fscanf(fp,"%s",data);
	printf("\n Reading data from files = %s",data);
	return 0;
}