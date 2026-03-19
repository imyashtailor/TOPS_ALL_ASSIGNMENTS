//simple interst in c++
#include<iostream>
using namespace std;

int main()
{
	int n;
	float p,r,interest;
	
	cout<<"\n Enter the Principle = ";
	cin>>p;
	
	cout<<"\n Enter the Number of year = ";
	cin>>n;
	
	cout<<"\n Enter the Rate = ";
	cin>>r;
	
	interest = p*n*r / 100;
	cout<<"\n Simple Interest are = "<<interest <<endl;
	
	return 0;
}