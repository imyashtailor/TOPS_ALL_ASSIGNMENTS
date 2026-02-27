/*
	Structure LAB Execrcise
	
	Aim :- Write a C program that defines a structure to store a student's details (name, 
			roll number, and marks). Use an array of structures to store details of 3 
			students and print them.
*/
#include<stdio.h>
struct student{
	char name[20];
	int enroll;
	int marks;
};
int main()
{
	struct student s1;
	printf("\n Enter the Name, RollNo and Marks = ");
	scanf("%s %d %d",s1.name,&s1.enroll,&s1.marks);
	
	printf("\n Name of the student = %s",s1.name);
	printf("\n Enrollment = %d",s1.enroll);
	printf("\n Marks = %d",s1.marks);
}