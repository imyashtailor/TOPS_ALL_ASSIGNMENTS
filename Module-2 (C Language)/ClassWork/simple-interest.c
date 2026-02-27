//Practical Task 2 - Simple Interest 

#include<stdio.h>

int main(){
	
	//varaible declare
	int p,n,r;
	float interest;
	
	printf("Enter the principle :");
	scanf("%d",&p);
	 
	printf("\n Enter the number year :");
	scanf("%d",&n);
	
	printf("\n Enter the rate:");
	scanf("%d",&r);
	
	//caluclation of simple interst and point pachi 2 value print
	interest = (p*n*r)/100;
	printf("\n Calculation of Simple interest : %.2f",interest);
	return 0;
}
