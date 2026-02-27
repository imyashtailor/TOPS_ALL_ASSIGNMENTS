//Angle Traingle Program

/*
	Traingle logic formula
	Explanation Logic :-
	Validity Check :- sum of all angle must be 180 , no angle can ne zero and negative
	right angle :- one of the angle is exactly 90.
	obtuse angle :- one angle is greater than 90.
	Actue angle traingle :- All three angles are less than 90.
*/

#include <stdio.h>

int main()
{
	//variable declaration
	int a1,a2,a3,sum;
	
	//output print in terminal
	printf("Enter the value of all three angle triangle :");
	scanf("%d %d %d",&a1, &a2, &a3);
	
	//sum of the calculation
	sum = a1 + a2 + a3;
	
	//condition of check
	if(sum == 180 && a1>0 && a2>0 && a3>0){
		//logic of right angle
		if(a1 == 90 || a2 == 90 || a3 == 90){
			printf("\n Right-Angle Triangle");
		}else if(a1 > 90 || a2 > 90 || a3 > 90){
			printf("\n Obtuse Angle Triangle");
		}else{
			printf("\n Actue Angle Triangle");
		}
	}else{
		printf("Error!... Invalid Triangle Value");
	}
	
	return 0;
}