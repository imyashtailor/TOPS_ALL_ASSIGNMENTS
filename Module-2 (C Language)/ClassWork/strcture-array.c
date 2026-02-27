/*
	Sturcture-array
*/

#include<stdio.h>
struct student{
	int enroll;
	char name[20];
	float per;
};
int main()
{
	struct student s[2];
	int i;
	for(i=0;i<2;i++){
		printf("\n Enter the Enrollment, Name and Percentage of student %d = ",i+1);
		scanf("%d %s %f",&s[i].enroll,s[i].name,&s[i].per);
	}
	printf("\nName \t Enroll \t Percentage \n \n");
	
	for(i=0;i<2;i++){
		printf("\n%s",s[i].name);
		printf("\t%d",s[i].enroll);
		printf("\t%f",s[i].per);
	}
	return 0;
}