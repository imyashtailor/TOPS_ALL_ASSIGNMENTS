//Template functions in c++
/*
	different types na data sathe work kari sako => template functions and classes.
*/
#include<iostream>
using namespace std;

//creating a template
template <typename T>
T add(T a, T b){
	cout<<"\nAddition of a and b = "<<a+b;
}

int main()
{
	add<int>(10,20);
	add<float>(20.7,30.4);
	return 0;
}