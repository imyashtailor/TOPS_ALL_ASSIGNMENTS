//Hollow Dymond pyramid
/*
        *           
      *   *         
    *       *       
  *           *     
*               *   
  *           *     
    *       *       
      *   *     
        *   
*/

#include<stdio.h>
int main()
{
	int row,col,k;
	
	//upper traingle
	for(row=1;row<=5;row++){
		for(k=4;k>row-5;k--){
			printf(" ");
		}
		for(col=1;col<=row*2-1;col++){
			if(col==1 || col==2*row-1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	//lower traingle
	for(row=4;row>=1;row--){
		for(k=4;k>row-5;k--){
			printf(" ");
		}
		for(col=1;col<=row*2-1;col++){
			if(col==1 || col==2*row-1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	return 0;
}
