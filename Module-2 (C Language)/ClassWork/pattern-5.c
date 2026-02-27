//pattern - 5
/*
	1
	2 3
	4 5 6
	7 8 9 10
	
	row = 4
	col = 4;
*/

#include<stdio.h>
int main()
{
	int row,col,sp=1;
	
	for(row=1;row<=4;row++){
		for(col=1;col<=row;col++){
			printf("%d ",sp);
			sp++;
		}
		printf("\n");
	}
}