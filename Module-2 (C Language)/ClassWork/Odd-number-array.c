/*
	Aim :- find total sum of odd number in given array
*/
#include<stdio.h>
int main()
{
	int a[5];
	int row,count=0;
	int sum = 0;
	
	for(row=0;row<5;row++){
		printf("Enter the Number of a[%d] = ",row,a[row]);
		scanf("%d",&a[row]);
	}
	
	//calculations of even number
	for(row=0;row<5;row++){
		if(a[row] % 2 != 0){
			printf("\n a[%d] = %d",row,a[row]);
			sum = sum + a[row];
			count++;
		}
	}
	printf("\n");
	printf("\n Total Odd Number: %d",count);
	printf("\n Total Sum of Number: %d",sum);
	return 0;
}