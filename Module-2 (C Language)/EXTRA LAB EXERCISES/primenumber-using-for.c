/*
	Loops Practical :- Extra Lab
	
1.) Write a C program that checks whether a given number is a prime number or not using a for 
loop. 
• Challenge: Modify the program to print all prime numbers between 1 and a given number.

Logic :-
n<=1 ==> is not a prime number
n>1 ==> is prime number
formula :- n-1
if(n % i == 0) isprime = 0

*/

#include<stdio.h>

int main()
{
	//declare a variable
	int n,i,num;
	int isPrime; //Assume the value 1
	
	//take a user input
	printf("Enter the Number: ");
	scanf("%d",&n);
	
	printf("\n Enter the prime number between 1 to %d: ",n);
	
	for(num=2;num<=n;num++){
		isPrime = 1;
		
		for(i=2;i<=num-1;i++){
			if(num % i == 0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1){
			printf("%d ",num);
		}
	}
	return 0;
}