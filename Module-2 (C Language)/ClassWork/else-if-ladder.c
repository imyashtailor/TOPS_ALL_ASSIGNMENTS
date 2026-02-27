#include<stdio.h>

int main(){
	//varaoble declaration
	int s1,s2,s3;
	
	//output print 
	printf("Enter all the values of traingle :");
	scanf("%d %d %d",&s1,&s2,&s3);
	
	if(s1==s2 && s2==s3 && s3==s1){
		printf("Equilateral Triangle");
	}
	else if((s1==s2)||(s2==s3)||(s3==s1)){
		printf("\n Isosceles Traingle");
	}
	else if((s1!=s2)&&(s2!=s3)&&(s3!=s1)){
		printf("\n Scalene Traingle");
	}
	else{
		printf("Wrong Input Traingle");
	}
	
	return 0;
}