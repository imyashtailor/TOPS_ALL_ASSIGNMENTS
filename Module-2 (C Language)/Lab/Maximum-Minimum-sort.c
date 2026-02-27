/*
	Write a C program that accepts 10 integers from the user and stores them in an array. The 
program should then find and print the maximum and minimum values in the array. 
• Challenge: Extend the program to sort the array in ascending order.
*/

#include<stdio.h>
int main()
{
    int arr[5];
    int row;
    int max = 0,min;
    
    for(row=0;row<5;row++){
        printf("Enter the Integers of arr[%d] = ",row,arr[row]);
        scanf("%d",&arr[row]);
    }
    
    min = arr[0]; //initilization for min
    for(row=0;row<5;row++){
        //using a ternary operator
        max = (arr[row] > max) ? arr[row] : max;
        min = (arr[row] < min) ? arr[row] : min;
    }
    printf("\n Maximum value of Array is = %d",max);
    printf("\n Minimum value of Array is = %d",min);
    
    
    printf("\n=======================================\n");
    printf("\n Sorting Program ==========>  ");
    
    int a[5];
    int i,j,temp;
    
    for(i=0;i<5;i++){
        printf("\nEnter the a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }   
        }
    }
    for(i=0;i<5;i++){
        printf("\na[%d] = %d",i,a[i]);
    }
    return 0;
}
