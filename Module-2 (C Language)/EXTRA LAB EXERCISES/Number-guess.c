/*
	Extra Lab Exercise :-
	Aim :- Write a C program that implements a simple number guessing game. The program should 
generate a random number between 1 and 100, and the user should guess the number 
within a limited number of attempts. 
• Challenge: Provide hints to the user if the guessed number is too high or too low. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int num,guess,i;
	
	//Generate the Random Number
	srand(time(0));
	num = rand() % 100 + 1;
	
	printf("Guess the Number between 1 to 100: ");
	printf("\nYou have only 5 Attempts");
	
	for(i=1;i<=5;i++){
		printf("\nAttempts %d: ",i);
		scanf("%d",&guess);
		
		if(guess == num){
			printf("Correct!..You have guess the Number");
		}else if(guess < num){
			printf("Too Low!..");
		}else{
			printf("Too High!..");
		}
	}
	printf("\n Sorry!..the correct number was = %d",num);
	return 0;
}