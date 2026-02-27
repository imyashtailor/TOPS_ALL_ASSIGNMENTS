//sum of digit to perform addition of first and last digit
/*
	ouput:-
	Enter the first Number : 1234
	sum of digit : 10
	first and last digit Addition :- 5
*/

#include<stdio.h>

int main()
{
    int n,sum=0,rev=0;
    int firstdigit,lastdigit;
    
    printf("Enter the Number: ");
    scanf("%d",&n);
    
    lastdigit = n % 10; //last digit mate
    
    firstdigit = n;
    
    while(firstdigit>=10){
        firstdigit = firstdigit / 10; //first digit mate
    }
    
    while(n!=0){
        sum = sum + (n % 10);
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    
    printf("Sum of digit is: %d",sum);
    printf("\nReverse Number is: %d",rev);
    printf("\nAddition of first and last digit: %d",firstdigit + lastdigit);
    return 0;
}