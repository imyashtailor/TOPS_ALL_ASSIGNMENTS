/*
	Character
*/
#include<stdio.h>
int main()
{
	FILE *fp;
	char data[20],ch;
	fp = fopen("test1.txt","w");
	if(fp==NULL){
		printf("\n something wrong");
	}
	fputc('Y',fp);
	fclose(fp);
	
	//data read using r command and fscanf() method
	fp = fopen("test1.txt","r");
	ch = fgetc(fp);
	
	printf("\n Reading data from files = %c",ch);
	return 0;
}