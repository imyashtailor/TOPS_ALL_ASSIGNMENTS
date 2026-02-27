//pattern -4
/*
	1
	1 2 
	1 2 3
	1 2 3 4
	1 2 3 4 5
	
	row = 5; => Outer for loop
	col = 5; => Ineer for loop
*/

#include<stdio.h>
int main()
{
	int row,col;
	
	for(row=1;row<=5;row++){
		for(col=1;col<=row;col++){
			printf("%d",col);
		}
		printf("\n");
	}
	
	return 0;
}