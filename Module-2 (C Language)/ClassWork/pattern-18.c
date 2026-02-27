/*
	Pascal's Triangle
	
	formula = num = num*(row-col)/(col+1); => most important formula

	 1 
   1 1 
  1 2 1 
 1 3 3 1 

*/

#include<stdio.h>
int main()
{
	int row,col,k;
	
	for(row=0;row<4;row++){
		int num=1;
		
		for(k=1;k>row-5;k--){
			printf(" ");
		}
		
		for(col=0;col<=row;col++){
			printf("%d ",num);
			//add this formula
			num = num * (row-col) / (col + 1);
		}
		printf("\n");
	}
	
	return 0;
}