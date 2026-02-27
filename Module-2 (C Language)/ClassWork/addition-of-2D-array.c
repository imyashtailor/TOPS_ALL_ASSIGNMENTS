/*
	Addition of two array
*/
#include<stdio.h>
int i,j;

void getArray(int ar[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\n Enter array[%d][%d] = ",i,j);
			scanf("\n%d",&ar[i][j]);
		}
	}
}
void sumOfArray(int a[2][2], int b[2][2], int c[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}
void printArray(int ar[2][2]){
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\t arr[%d][%d] = %d",i,j,ar[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[2][2],b[2][2],c[2][2];
	getArray(a);
	printArray(a);
	printf("\n=====================");
	getArray(b);
	printArray(b);
	printf("\n=====================");
	sumOfArray(a,b,c);
	printArray(c);
	return 0;
}