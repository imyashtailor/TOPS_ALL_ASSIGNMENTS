/*
	2D Array
	
	syntax :- datatype array_name[row][col] = {element};
*/

#include<stdio.h>
int main()
{
	//2-D Array Example
	int a[2][2] = {12,23,45,67};
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t a[%d][%d] = %d",i,j,a[i][j]);
		}
		printf("\n");
	}
	return 0;
}