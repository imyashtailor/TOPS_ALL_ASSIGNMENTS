/*
	All data types
	1. primitive data types, 2.derived data types, 3. user-defined data types ,4. modified data types 
*/
#include<iostream>
using namespace std;

struct student{
	int age;
};

int add(int a,int b){
	return a + b;
}

int main()
{
	int a = 10; //primitive data type (int=> built in data type)
	int arr[2] = {1,2}; //deroived data type(Array)
	student s;          //user-defined data type
	s.age = 25;
	
	cout<<"Primitive Data type = "<<a<<endl;
	cout<<"Derived Data type = "<<arr[1]<<endl;
	cout<<"User-defined data type (struct) = "<<s.age<<endl;
	cout<<"Function = "<<add(6,4)<<endl;
	return 0;
}