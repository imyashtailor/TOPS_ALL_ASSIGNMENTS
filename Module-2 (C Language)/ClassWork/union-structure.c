/*
	Union Example
*/
#include<stdio.h>
union student{
	int enroll;
	char name[20];
	float per;
};
int main()
{
	union student s1 = {101,"Yash",84};
	printf("\n Name of Student = %s",s1.name);
	printf("\n Enrollment  = %d",s1.enroll);
	printf("\n Percentage = %.2f",s1.per);
	
	return 0;
}