/*
	static varible 
*/

#include<stdio.h>
void incr(){
	int normal = 0;
	static int like = 0;
	like++;
	normal++;
	printf("\n like = %d \t normal variable = %d",like,normal);
}
int main()
{
	int i;
	for(i=1;i<=10;i++){
		incr();
	}
	return 0;
}