/*Write a C++ program that takes a student’s marks as input and calculates the grade 
based on if-else conditions.

=> Marks > 90: Grade A 
=> Marks > 75 and <= 90: Grade B 
=> Marks > 50 and <= 75: Grade C 
=> Marks <= 50: Grade D 
*/ 

#include<iostream>
using namespace std;

int main()
{
	int sub1,sub2,sub3;
	int marks;
	
	cout<<"Enter the Marks of Sub1 = ";
	cin>>sub1;
	
	cout<<"Enter the Marks of Sub2 = ";
	cin>>sub2;
	
	cout<<"Enter the Marks of Sub3 = ";
	cin>>sub3;
	
	if(sub1 < 0 || sub1 > 100
	||sub2 < 0 || sub2 > 100
	||sub3 < 0 || sub3 > 100){
		cout<<"Invalid Marks."<<endl;
	}
	
	marks = (sub1 + sub2 + sub3)/3;
	
	if(marks > 90){
		cout<<"\nGrade A";
	}else if(marks > 75 && marks <= 90){
		cout<<"\nGrade B";
	}else if(marks > 50 && marks <=75){
		cout<<"\nGrade C";
	}else if(marks <=50){
		cout<<"\nGrade D";
	}
	return 0;
}