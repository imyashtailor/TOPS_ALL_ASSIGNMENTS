/*
	Matrix Addition
	
	Aim :- Write a C++ program to perform matrix addition on two 2x2 matrices. 
*/
#include<iostream>
using namespace std;
int row,col;

void getarray(int arr[2][2]){
    for(row=0;row<2;row++){
        for(col=0;col<2;col++){
            cout<<"Enter the Array of Integers = ";
            cin>>arr[row][col];
        }
    }    
}
void addofarray(int a[2][2], int b[2][2], int c[2][2]){
    for(row=0;row<2;row++){
        for(col=0;col<2;col++){
            c[row][col] = a[row][col] + b[row][col];
        }
    }    
}
void printarray(int arr[2][2]){
    for(row=0;row<2;row++){
        for(col=0;col<2;col++){
            cout<<"\n \t = "<<arr[row][col];
        }
    }    
}
int main()
{
    int a[2][2],b[2][2],c[2][2];
    getarray(a);
    printarray(a);
    cout<<"\n=======================\n";
    getarray(b);
    printarray(b);
    cout<<"\n=======================\n";
    addofarray(a,b,c);
    printarray(c);
    return 0;
}