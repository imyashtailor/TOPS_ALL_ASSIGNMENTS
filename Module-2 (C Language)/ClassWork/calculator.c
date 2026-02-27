#include<stdio.h>
#include<float.h>

int main(){
	//declaring a varaible
	char op;
	double a,b,res;
	
	//print the output
	printf("Enter Operator (+,-,*,/): ");
	scanf("%c",&op);
	
	//read the two number
	printf("Enter the first number:");
	scanf("%lf",&a);
	
	printf("Enter the second number:");
	scanf("%lf",&b);
	
	//switch case
	switch(op){
		case '+':
			res = a + b;
		break;
		
		case '-':
			res = a - b;
		break;
		
		case '*':
			res = a * b;
		break;
		
		case '/':
			res = a / b;
		break;
		default:
			printf("Error! Invalid Operator");
			res = -DBL_MAX;
	}
	if(res!=-DBL_MAX)
		printf("%.2lf",res);
		
	return 0;
}