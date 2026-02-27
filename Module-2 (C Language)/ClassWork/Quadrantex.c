//Practical - Quadrant Of Graph

/*
	steps to follow 
	1st Quadrant --> ++
	2nd Quadrant --> -+
	3rd Quadrant --> --
	4th Quadrant --> +-
*/

#include<stdio.h>

int main()
{
	//varaible declaration of quadrants
	int x,y,choice;
	
	//Take the value from user
	printf("Enter the X Quadrant Value: ");
	scanf("%d",&x);
	
	printf("Enter the Y Quadrant Value: ");
	scanf("%d",&y);
	
	//check the spical cases 
	if(x==0 && y==0){
		printf("\n Points is at origin (0,0)");
	}else if(x==0 && y!=0){
		printf("\n Points lies on Y-axis");
	}else if(y==0 && x!=0){
		printf("\n Points lies on X-axis");
	}
	
	//check the Quadrant value
	if(x>0 && y>0){
		printf("\n 1st Quadrant (++)");
	}else if(x<0 && y>0){
		printf("\n 2nd Quadrant (-+)");
	}else if(x<0 && y<0){
		printf("\n 3rd Quadrant (--)");
	}else if(x>0 && y<0){
		printf("\n 4th Quadrant (+-)");
	}else{
		printf("Error!... Invalid Quadrant Value");
	}
	return 0;
}