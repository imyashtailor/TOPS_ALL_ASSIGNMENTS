/*
	Aim :- Write a C++ program that accepts user input for their name and age and then 
		   displays a personalized greeting. 
*/

#include<iostream>
using namespace std;
int main()
{
	string name;
	int age;
	
	cout<<"Enter the Name = ";
	cin>>name;
	
	cout<<"Enter the Age = ";
	cin>>age;
	
	//display a personalized greetings
	cout << "\nHello " << name << "! You are " << age << " years old." << endl;
	return 0;
}