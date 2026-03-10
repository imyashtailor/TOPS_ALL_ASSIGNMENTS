//function in c++

#include<iostream>
using namespace std;

int mul(int a,int b){
	return a * b;
}

int main()
{
	int a,b;
	
	cout<<"\nEnter the Value of A = ";
	cin>>a;
	
	cout<<"\nEnter the Value of B = ";
	cin>>b;
	
	cout<<"\nMultiplication of Two Value = "<<mul(a,b)<<endl;
	return 0;
}