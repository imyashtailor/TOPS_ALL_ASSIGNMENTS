//Heirarchy Inheritance in c++
#include<iostream>
using namespace std;

class Employee{
	public:
		int eid;
		char ename[20];
		int esalary;
		
		void getEmployee(){
			cout<<"Enter the Employee Id Name and Salary = ";
			cin>>eid>>ename>>esalary;
		}
};

class Manager:public Employee{
	public:
		void calsalary(){
			float s = esalary+(esalary*0.07);
			cout<<"\nSalary = "<<s;
		}
};

class Hr:public Employee{
	public:
		void calsalary(){
			float s = esalary+(esalary*0.1);
			cout<<"\nSalary = "<<s;
		}
};

int main()
{
	int ch;
	cout<<"Press 1 if you are Manager";
	cout<<"\nPress 2 if you are HR";
	cout<<"\nEnter your Role = ";
	cin>>ch;
	
	switch(ch){
		case 1:
			Manager m1;
			m1.getEmployee();
			m1.calsalary();
		break;
		
		case 2:
			Hr h1;
			h1.getEmployee();
			h1.calsalary();
		break;
		
		default:
			cout<<"\nWRONG ROLE...";
	}
	return 0;
}