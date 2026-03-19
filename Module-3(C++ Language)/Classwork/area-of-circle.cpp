//const keyword example
#include<iostream>
using namespace std;

int main()
{
	int r;
	const float pi = 3.14;
	float area;
	
	cout<<"Enter the Radius = ";
	cin>>r;
	
	area = pi*r*r;
	
	cout<<"Area of Circle = "<<area;
	return 0;
}