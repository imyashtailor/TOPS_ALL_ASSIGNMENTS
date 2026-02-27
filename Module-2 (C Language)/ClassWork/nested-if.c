#include<stdio.h>

int main()
{
	//Varaible Declaration
	int maths,phy,chem,total,subtotal;
	
	//output ptint in terminal
	printf("Enter the Marks of Maths :");
	scanf("%d",&maths);

	printf("Enter the Marks of Physics :");
	scanf("%d",&phy);
	
	printf("Enter the Marks of Chemestry :");
	scanf("%d",&chem);
		
	//if-condition
	if(maths>=65 && phy>=55 && chem>=50){
		total = maths + phy + chem;
		subtotal = maths + phy;
		
		//inner condition(nested if)
		if(total>=190 || subtotal>=145){
			printf("\n Eligible for Admission");
		}
		else{
			printf("\n Not Eligible for Admission ---> Innner");
		}
	}
	else{
		printf("Not Eligible for Admission ---> Outer");
	}
	
	return 0;
}