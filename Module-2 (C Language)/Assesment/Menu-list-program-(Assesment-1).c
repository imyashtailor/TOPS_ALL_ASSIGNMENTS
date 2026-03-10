//Assesment - 1 in c language
#include<stdio.h>

int total = 0;

void printmenu()
{
	int ch;
	int qty;
	char ch1;
	
	//print the menu
	printf("1. Pizza ------- 180");
	printf("\n2. Burger ------ 100");
	printf("\n3. Sandwich ----- 50");
	printf("\n4. Dosa --------- 120");
	printf("\n5. Vada Sambhar ------- 100");
	printf("\n6. Pavbhaji ------ 90");
	
	//using switch case to the menu
	printf("\n============================\n");
	printf("\nEnter your Choice = ");
	scanf("%d",&ch);
	switch(ch){
		case 1:
			printf("\nPizza");
			printf("\nEnter the Quantity = ");
			scanf("%d",&qty);
			total = total + (180 * qty);
			printf("\nTotal Sum = %d",180*qty);
		break;
		
		case 2:
			printf("\nBurger");
			printf("\nEnter the Quantity = ");
			scanf("%d",&qty);
			total = total + (100 * qty);
			printf("\nTotal Sum = %d",100*qty);
		break;
		
		case 3:
			printf("\nSandwich");
			printf("\nEnter the Quantity = ");
			scanf("%d",&qty);
			total = total + (50 * qty);
			printf("\nTotal Sum = %d",50*qty);
		break;
		
		case 4:
			printf("\nDosa");
			printf("\nEnter the Quantity = ");
			scanf("%d",&qty);
			total = total + (120 * qty);
			printf("\nTotal Sum = %d",120*qty);
		break;
		
		case 5:
			printf("\nVada Sambhar");
			printf("\nEnter the Quantity = ");
			scanf("%d",&qty);
			total = total + (100 * qty);
			printf("\nTotal Sum = %d",100*qty);
		break;
		
		case 6:
			printf("\nPavbhaji");
			printf("\nEnter the Quantity = ");
			scanf("%d",&qty);
			total = total + (90 * qty);
			printf("\nTotal Sum = %d",90*qty);
		break;
		
		default:
			printf("\nWrong Choice or Menu!...");
		break;
	}
}

int main()
{
	int ch1;
	while(1){
		printmenu();
		printf("\nDo you want to order more?");
		printf("\nPress 1 = Yes");
        printf("\nPress 2 = No");
        printf("\nEnter Your Choice =  ");
		scanf("%d",&ch1);
		if(ch1==2){
			break;
		}
	}
	printf("\n=======================================\n");
	printf("\nFinal Total Bill = %d",total);
	printf("\nThank You!...Visit Again....");
	printf("\n=======================================\n");
	return 0;
}