/*
	Aim :- Multiplication Table 
o Write a C++ program to display the multiplication table of a given number using a for loop. 
*/
#include<iostream>
using namespace std;

int main()
{
	int num,i,r;
	
	cout<<"Enter the Number = ";
	cin>>num;
	
	cout<<"Enter the Range = ";
	cin>>r;
	
	for(i=1;i<=r;i++){
		cout<<num<<" x "<<i<<" = "<<num*i<<endl;
	}
	return 0;
}