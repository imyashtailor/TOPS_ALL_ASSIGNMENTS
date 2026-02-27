#include<stdio.h>

int main()
{
	int r,l,base,height,choice;
	float area;
	
	//choices output
	printf("\nPress 1 for area of circle");
	printf("\nPress 2 for area of square");
	printf("\nPress 3 for area of triangle");
	
	//get the user input
	printf("\nEnter the Choices :");
	scanf("%d",&choice);
	
	//condition of switch statement
	switch(choice)
	{
		case 1:
			printf("Enter the Radius :");
			scanf("%d",&r);
			printf("Area of Circle is :%.2f",(3.14*r*r));
		break;
		
		case 2:
			printf("Enter the Length: ");
			scanf("%d",&l);
			printf("Area of square is:%d",(l*l));
		break;
		
		case 3:
			printf("Enter the base:");
			scanf("%d",&base);
			
			printf("Enter the height:");
			scanf("%d",&height);
			
			area = ((float)base * height)/2;
			printf("Area of Triangle: %.2f",area);
		break;
		default:
			printf("Wrong Choices Ever!....");
		return 0;
	}
}