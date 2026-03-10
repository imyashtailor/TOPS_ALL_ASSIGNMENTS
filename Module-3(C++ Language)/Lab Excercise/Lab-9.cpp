/*
	Aim :- Number Guessing Game 
=> 		Write a C++ program that asks the user to guess a number between 1 and 100. The 
		program should provide hints if the guess is too high or too low. Use loops to allow 
		the user multiple attempts. 
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	int num,i,guess;
	
	srand(time(0));
	num = rand() % 100 + 1;
	
	cout<<"Enter the Gusseing Number between 1 to 100";
	cout<<"\nYou have only 5 Attempts";
	
	for(i=1;i<=5;i++){
		cout<<"\nAttempts "<<i<<endl;
		cin>>guess;
		
		if(guess == num){
			cout<<"Correct!...You are Guessing Right Number";
		}else if(guess < num){
			cout<<"Too Low!...";
		}else{
			cout<<"Too High!...";
		}
	}
	cout<<"\nSorry!...The Correct Number is = "<<num<<endl;
	return 0;
}