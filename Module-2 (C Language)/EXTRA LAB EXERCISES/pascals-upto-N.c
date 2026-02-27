/*
	Pascal's traingle 
	
	Aim :- Write a C program that generates Pascal’s Triangle up to N rows using loops. 
• Challenge: Implement the same program using a recursive function.

pascal's formula = num = num * (row-col)/(col+1);
*/

#include<stdio.h>
void pascals(){
	int n,row,col,k;
	
	printf("Enter the Number up to N numbers: ");
	scanf("%d",&n);
	
	for(row=0;row<n;row++){
		int num=1;
		
		for(k=0;k>row-n-1;k--){
			printf(" ");
		}
		
		for(col=0;col<=row;col++){
			printf("%d ",num);
			//formula 
			num = num *(row-col)/(col+1);
		}
		printf("\n");
	}
}
int main(){
	pascals();
	return 0;
}