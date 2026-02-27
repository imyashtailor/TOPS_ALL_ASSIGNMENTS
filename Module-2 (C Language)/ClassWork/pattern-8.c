/*
	Inverted left half pyramid
	* * * * *
	  * * * *
	    * * *
	      * *
	        *
*/

#include<stdio.h>
int main()
{
	int row,col,k;
	
	for(row=5;row>=1;row--){
		for(k=4;k>=row;k--){
			printf(" ");
		}
		for(col=1;col<=row;col++){
			printf("*");
		}
		printf("\n");
	}	
}