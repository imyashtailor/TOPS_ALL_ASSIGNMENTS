//break statement

#include<stdio.h>
main()
{
	int i,num;
	
	//continue
	for(i=1;i<=10;i++){
		if(i==5){
			continue;
		}
		printf("\n i=%d",i);
	}
	
	//break;
	for(;;){
		printf("\n Enter Num: ");
		scanf("%d",&num);
		if(num==7){
			break;
		}
	}
}