/*
	Nested structure
*/
#include<stdio.h>
struct sub{
	char name[20];
	int marks;
};

struct student{
	int enroll;
	char name[20];
	float per;
	struct sub sub1;
};
int main()
{
	struct student s1;
	printf("\n Enter the Enrollment, Name and Percentage = ");
	scanf("%d %s %f",&s1.enroll,s1.name,&s1.per);
	
	printf("\n Enter the Subject marks and name = ");
	scanf("%s %d",s1.sub1.name,&s1.sub1.marks);
	
	printf("\n Name of the student = %s",s1.name);
	printf("\n Enrollment = %d",s1.enroll);
	printf("\n Percentage = %.2f",s1.per);
	printf("\n SubjectName = %s",s1.sub1.name);
	printf("\n Marks = %d",s1.sub1.marks);	
	return 0;
}