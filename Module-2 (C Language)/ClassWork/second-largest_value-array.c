/*
	find the second largest value
*/
#include<stdio.h>
int main()
{
	int row;
	int a[5];
	int max,second;
	
	for(row=0;row<5;row++){
		printf("Enter the a[%d] = ",row);
		scanf("%d",&a[row]);
	}
	
	max = second = a[0];
	for(row=1;row<5;row++){
		if(a[row] > max){
			second = max;
			max = a[row];
		}else{
			second = (a[row] > max && a[row] < second) ? a[row] : second;
		}
	}
	printf("\nLargest Value = %d",max);
	printf("\nSecond Largest Value = %d",second);
	return 0;
}