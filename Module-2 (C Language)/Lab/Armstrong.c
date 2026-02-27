/*
	the given number is armstrong or not
	
	logic explanation :-
	last digit find = num % 10
	sum = sum + (digit*digit*digit)
	num = num / 10;
*/

#include<stdio.h>
int main()
{
	int num,digit,sum=0,temp;
	
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	temp=num;
	while(temp!=0){
		digit = temp % 10;
		sum = sum + (digit*digit*digit);
		temp = temp / 10;
	}
	if(sum==num){
		printf("\n %d is a Armstrong number",num);
	}else{
		printf("\n %d not an Armatrong number",num);
	}
	
	return 0;
}

