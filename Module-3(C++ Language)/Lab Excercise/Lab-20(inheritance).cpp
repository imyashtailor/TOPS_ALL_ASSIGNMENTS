/*
	Aim :- Write a program that implements inheritance using a base class Person and derived 
classes Student and Teacher. Demonstrate reusability through inheritance. 
*/
#include<iostream>
using namespace std;

//base class
class Person{
	public:
		string name;
		int age;
		
		void getPerson(){
			cout<<"Enter Name = ";
			cin>>name;
			cout<<"Enter Age = ";
			cin>>age;
		}
		
		void showPerson(){
			
			cout<<"Name = "<< name << endl;
			cout<<"Age = "<< age << endl;
		}
};

//derived class-1
class Student:public Person{
	public:
		int marks;
		
		void getStudent(){
			getPerson(); //reuse the method or person
			cout<<"Enter Marks = ";
			cin>>marks;
		}
		
		void showStudent(){
			cout<<endl;
			showPerson(); //resue
			cout<<"Marks = "<< marks << endl;
		}
};

class Teacher:public Person{
	public:
		string subject;
		
		void getTeacher(){
			getPerson();
			cout<<"Enter the Subject Name = ";
			cin>>subject;
		}
		
		void showTeacher(){
			cout<<endl;
			showPerson(); //resuse
			cout<<"Subject = " << subject << endl;
		}
};
int main()
{
	Student s;
	Teacher t;
	
	cout<<"\n===============Student's Details=================\n";
	s.getStudent();
	s.showStudent();
	
	cout<<"\n===============Teacher's Details=================\n";
	t.getTeacher();
	t.showTeacher();
	return 0;
}