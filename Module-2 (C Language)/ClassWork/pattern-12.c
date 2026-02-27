//Hourglass pattern
/*
	* * * * *
	 * * * *
	  * * *
	   * *
	    *
	   * *
	  * * *
	 * * * *
	* * * * *
*/


#include<stdio.h>
int main()
{
	int row,col,k;

	//Lower Triangle	
	for(row=5;row>=1;row--){
		for(k=4;k>=row;k--){
			printf(" ");
		}
		for(col=1;col<=row;col++){
			printf("* ");
		}
		printf("\n");
	}
	
	//Upper traingle
	for(row=2;row<=5;row++){
		for(k=4;k>=row;k--){
			printf(" ");
		}
		for(col=1;col<=row;col++){
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}