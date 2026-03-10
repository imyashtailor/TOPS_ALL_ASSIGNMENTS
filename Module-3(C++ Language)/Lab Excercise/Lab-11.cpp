/*
	Aim :- Nested Control Structures 
o Write a program that prints a right-angled triangle using stars (*) with a nested loop. 
*/
#include<iostream>
using namespace std;

int main()
{
	int row,col;
	
	for(row=1;row<=5;row++){
		for(col=1;col<=row;col++){
			cout<<"* ";
		}
		cout<<endl;
	}
	return 0;
}