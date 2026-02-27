//rohmbus pattern
/*
		 * * * * 
	    * * * * 
	   * * * * 
	  * * * * 
	 * * * * 
	* * * *
	
row = 6
col = 4
*/

#include<stdio.h>
int main()
{
	int row,col,k;
	
	for(row=1;row<=6;row++){
		for(k=5;k>=row;k--){
			printf(" ");
		}
		for(col=1;col<=4;col++){
			printf("*");
		}
		printf("\n");
	}	
}