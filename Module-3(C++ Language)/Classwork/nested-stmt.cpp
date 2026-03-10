//Nested - loop statement
#include<iostream>
using namespace std;

int main()
{
	int num;
	
	cout<<"Enter the Number = ";
	cin>>num;
	
	if(num > 0){
		if(num % 2 == 0){
			cout<<"Number is positive and even number";
		}else{
			cout<<"Number is positive and odd number";
		}
	}else{
		cout<<"Number is Negative";
	}
	return 0;
}