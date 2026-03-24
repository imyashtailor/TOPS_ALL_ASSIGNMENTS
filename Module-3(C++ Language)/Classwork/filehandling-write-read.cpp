//File handling in c++ for writing
/*
	ofstream - write karva mate special classs
	ifstream - read karva mate special class
*/
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	//Writing file handling
	char name[20],email[20];
	ofstream f1;
	f1.open("student.txt",ios::out);
	cout<<"\nEnter the Name and Email = ";
	cin>>name>>email;
	//file ma print karva mate
	f1<<name<<"\n"<<email;
	f1.close();
	
	//Reading file handling
	ifstream f2;
	f2.open("student.txt",ios::in);
	f2>>name>>email;
	cout<<"\nReading name from the file = "<<name;
	cout<<"\nEmail = "<<email;
	f1.close();
	
	return 0;
}