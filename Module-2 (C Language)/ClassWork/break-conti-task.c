/*
	Break & Continue Task using switch statement
	
	Area of circle = pi * r * r;
	Area of Rectangle = A = w x l;
	Simple Interest = pnr/100;
	Print Any Table = number,range and then n * i
	press 5 for exit menu
*/

#include<stdio.h>
int main()
{
    int choice,w,l,res;
    int p,n,r,num,range,i,number;
    float ra, pi=3.14, result, interest;
    
    printf("............Menu..............");
    printf("\nEnter Your Choice: ");
    printf("\n1.Area of Circle");
    printf("\n2.Area of Rectangle");
    printf("\n3.Simple Interest");
    printf("\n4.Print any table");
    printf("\n5.Exit");
    scanf("%d",&choice);
    
    switch(choice)
    {
         case 1:
         while(1){ //1 means true
            printf("Enter the Radius: ");
            scanf("%f",&ra);
            if(ra==8){
                break;
            }
         }
         result = pi * ra * ra;
         printf("Area of Circle is: %.2f",result); 
        break;
        
        case 2:
            printf("\nEnter the Width: ");
            scanf("%d",&w);
            printf("Enter the length: ");
            scanf("%d",&l);
            res = w * l;
            printf("Area of Rectnagle is: %d",res);
        break;
        
        case 3:
            printf("\nEnter the Principle: ");
            scanf("%d",&p);
            printf("\nEnter number of year: ");
            scanf("%d",&n);
            printf("\nEnter the rate: ");
            scanf("%d",&r);
            interest = p * n * r / 100;
            printf("Simple Interest Final Result Value : %.2f",interest);
        break;
        
        case 4:
            printf("\nEnter the Number: ");
            scanf("%d",&num);
            printf("\nEnter the Range: ");
            scanf("%d",&range);
            for(i=1;i<=range;i++){
                if(i==5){
                    continue;
                }
                printf("\n%d x %d = %d",num,i,num * i);
            }
        break;
        
        case 5:
            printf("Program Finished......");
        break;
        
        default:
            printf("Invalid Choice!...");
        break;
    }
    return 0;
}