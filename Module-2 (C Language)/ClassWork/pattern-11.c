//Diamond Pattern
/*
					*
				  *   *
				*   *   *
			  *   *   *   *
			*   *   *   *   *
			*   *   *   *   *
			  *   *   *   *
			    *   *   *
			      *   *
			        *
	row = 10 => outer loop
	col = 10 => inner loop
*/

#include<stdio.h>
int main()
{
	int row,col,k,i,j;
	
	//Upar half
	for(row=1;row<=5;row++){
		for(k=5;k>row;k--){
			printf(" ");
		}
		for(col=1;col<=row;col++){
			printf("* ");
		}
		printf("\n");
	}
	
	//lower half
	for( row=4;row>=1;row--){
		for(k=5;k>row;k--){
			printf(" ");
		}
		for(col=1;col<=row;col++){
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}