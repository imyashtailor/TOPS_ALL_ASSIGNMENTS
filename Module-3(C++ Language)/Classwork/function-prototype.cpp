//function-prototype
#include<iostream>
using namespace std;

//function prototype
int add(int,int);

int main()
{
	int result = add(20,30);
	cout<<"Addition is = "<<result;
	return 0;
}
//function declaration
int add(int a,int b){
	return a + b;
}
