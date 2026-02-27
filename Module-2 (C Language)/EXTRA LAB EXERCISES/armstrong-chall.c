//to find an armstrong number using functions and normal case programming
/*
	Challenge :- Write a program to find all Armstrong numbers between 1 and 1000.
*/

#include<stdio.h>

void armstrong(){
	int n,i,sum,digit,temp;
    
    for(i=1;i<=1000;i++){
        n=i;
        temp=n;
        sum=0;
        
        while(temp!=0){
            digit = temp % 10;
            sum+=(digit*digit*digit);
            temp = temp / 10;
        }
        if(sum==n){
            printf("\ni=%d",i);
        }
    }  
}

int main()
{
	armstrong();
	return 0;
}