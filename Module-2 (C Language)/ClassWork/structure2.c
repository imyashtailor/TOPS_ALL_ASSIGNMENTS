/*
	structure 2
	
	for user defined input
*/
#include<stdio.h>
struct student{
	int enroll;
	char name[20];
	float per;
};
int main()
{
	struct student s1;
	printf("\n Enter the Enrollment, Name and Percentage = ");
	scanf("%d %s %f",&s1.enroll,s1.name,&s1.per);
	
	printf("\n Name of the student = %s",s1.name);
	printf("\n Enrollment = %d",s1.enroll);
	printf("\n Percentage = %.2f",s1.per);	
	return 0;
}