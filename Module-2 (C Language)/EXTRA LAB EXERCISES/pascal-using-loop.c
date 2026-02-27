/*
Aim :- Write a C program that generates Pascal’s Triangle up to N rows using loops. 
*/

#include<stdio.h>
int main()
{
	int n,row,col,k;
	
	printf("Enter the Number: ");
	scanf("%d",&n);
	
	for(row=0;row<n;row++){
		for(k=0;k>row-n-1;k--){
			printf(" ");
		}
		int num=1;
		for(col=0;col<=row;col++){
			printf("%d ",num);
			num = num * (row-col)/(col+1);
		}
		printf("\n");
	}
	
	return 0;
}