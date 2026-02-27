/*
	Filehandling 4 and also student record
*/
#include<stdio.h>
int main()
{
	FILE *fp;
	char name[20],email[30],ch;
	int enroll,i;
	
	fp = fopen("Student.csv","a");
	for(i=1;i<=3;i++){
		printf("\n Enter the Student Details of no = %d",i);
		printf("\n Enter the Enrollment Name and Emails are = ");
		scanf("%d %s %s",&enroll,name,email);
		fprintf(fp,"%d,%s,%s",enroll,name,email);
	}
	fclose(fp);
	
	//Reading Operation 
	
	fp = fopen("Student.csv","r");
	printf("\nEnroll\tName\tEmail \n");
	
	//read and display file content 
	while((ch=fgetc(fp))!=EOF){
		if(ch==','){
			putchar('\t');
			continue;
		}
		putchar(ch);
	}
	fclose(fp);
	return 0;
}