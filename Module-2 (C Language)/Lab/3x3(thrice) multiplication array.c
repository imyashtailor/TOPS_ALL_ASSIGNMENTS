/*
	Write a C program to work with 3x3 matrices and matrix multiplication.
*/

#include<stdio.h>
int main()
{
	int row,col,k;
	int a[3][3], b[3][3], result[3][3] = {0};
	
	//take the input from A
	printf("Enter the element of a = ");
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			scanf("%d",&a[row][col]);		
		}
	}
	
	//take the input from B
	printf("Enter the element of b = ");
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			scanf("%d",&b[row][col]);		
		}
	}

	//calculation of multiplication
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			for(k=0;k<3;k++){
				result[row][col] += a[row][k]*b[k][col];
			}		
		}
	}
	
	//display the result of multiplication
	printf("Multiplication of Array is = ");
	for(row=0;row<3;row++){
		for(col=0;col<3;col++){
			printf("\n %d",result[row][col]);		
		}
	}
	return 0;
}