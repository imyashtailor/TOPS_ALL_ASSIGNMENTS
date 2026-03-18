/*
	String Palindrome Check 
	
	Aim :-  Write a C++ program to check if a given string is a palindrome (reads the same 
forwards and backwards). 
*/

#include<iostream>
using namespace std;

int main()
{
	string str, reversed = "";
	
	//step 1 :- take the input from the user
	cout<<"Enter the string = ";
	cin>>str;
	
	string original = str;
	
	//step 2:- Reverse the string logic
	for(int i=str.length()-1;i>=0;i--){
		reversed = reversed + str[i];
	}
	
	//step 3 :- compare the string
	if(original == reversed){
		cout<<"It is Palindrome string";
	}else{
		cout<<"It is not a Palindrome string";
	}
	return 0;
}