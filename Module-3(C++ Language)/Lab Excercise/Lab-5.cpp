/*
	Aim :- Write a C++ program that demonstrates the use of variables and constants. Create 
variables of different data types and perform operations on them. 
*/

#include<iostream>
using namespace std;

int main()
{
	int a,r;               //Integer
	float b,area;             //float
	char c;              //character
	double d;            //double
	string s;            //string
	int inputValue;      //temporary varaible
	bool isstudent;      //boolean 
	
	const float pi = 3.14;     //constant
	
	cout<<"Enter the Number 1 = ";
	cin>>a;
	
	cout<<"Enter the Number 2 = ";
	cin>>b;
	
	cout<<"Enter the Single Character = ";
	cin>>c;
	
	cout<<"Enter the Number 3 = ";
	cin>>d;
	
	cout<<"Enter the string = ";
	cin>>s;
	
	cout<<"Are you a student (0 for yes, 1 for no) = ";
	cin>>inputValue;
	
	// Correct assignment for boolean
    isstudent = (inputValue == 0);
    
    cout<<"Enter the Radius = ";
    cin>>r;
    
    area = pi*r*r;
	
	//display the result
	cout<<"\n======Your details are below=======\n";
	cout << boolalpha;
	cout<<"\nIntger Value is = "<<a<<endl;
	cout<<"\nFloat Value is = "<<b<<endl;
	cout<<"\nSingle Character is = "<<c<<endl;
	cout<<"\nDouble Value is = "<<d<<endl;
	cout<<"\nString is = "<<s<<endl;
	cout<<"\nIs Student? = "<<isstudent<<endl;
	cout<<"\n Constant of PI value are = "<<pi<<endl;
	cout<<"\n Area of Circle = "<<area<<endl;
	return 0;
}