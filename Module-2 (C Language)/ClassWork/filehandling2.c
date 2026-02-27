/*
	append and add the string
*/

#include<stdio.h>
int main()
{
	FILE *fp;
	char data[20];
	fp = fopen("test3.txt","w");
	if(fp==NULL){
		printf("\n something wrong");
	}
	fputs("Bilimora City",fp);
	fclose(fp);
	
	//data read using r command and fscanf() method
	fp = fopen("test3.txt","r");
	fgets(data,20,fp);
	printf("\n Reading data from files = %s",data);
	return 0;
}