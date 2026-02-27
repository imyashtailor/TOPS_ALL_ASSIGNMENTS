/*
	Array 2
	
	sum of all array element
*/
#include<stdio.h>
int main()
{
	int a[5],sum = 0;
	int i;
	
	for(i=0;i<5;i++){
		printf("\n Enter the a[%d] = ",i);
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}
	for(i=0;i<5;i++){
		printf("\n a[%d]=%d",i,a[i]);
	}
	printf("\nSum of all array element: %d",sum);
	return 0;
}
