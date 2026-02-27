//basic example of file handling
#include<stdio.h>
int main()
{
	FILE *fp;
	
	fopen("hello.txt","w");
	fprintf(fp, "%s", "Hello Text");
	fclose(fp);
	return 0;
}