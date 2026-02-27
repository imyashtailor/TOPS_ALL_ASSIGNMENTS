/*
	sturctur of product
*/
#include<stdio.h>
struct product{
	char name[20];
	float price;
	char description[20];
};
int main()
{
	struct product p[5];
	int i;
	for(i=0;i<5;i++){
		printf("\n Enter the productname, price and description of product %d = ",i+1);
		scanf("%s %f %s",p[i].name,&p[i].price,p[i].description);
	}
	printf("\ProductName \t Price \t Description \n \n");
	
	for(i=0;i<5;i++){
		printf("\n%s",p[i].name);
		printf("\t%f",p[i].price);
		printf("\t%s",p[i].description);
	}
	return 0;
}