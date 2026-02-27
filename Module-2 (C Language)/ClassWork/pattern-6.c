//pattern - 6
/*
					*
				  *   *
				*   *   *
			  *   *   *   *
			*   *   *   *   *
  
  row = 5 => outer loop
  col = 5 => inner loop
*/
#include<stdio.h>
int main()
{
	int row,col,k;
	
	//outer loop for row
	for(row=1;row<=5;row++){
		//spacing 
		for(k=4;k>=row;k--){
			printf(" ");
		}
	
		//inner loop for col
		for(col=1;col<=row;col++){
			printf("* ");
		}
		printf("\n");
	}
}
