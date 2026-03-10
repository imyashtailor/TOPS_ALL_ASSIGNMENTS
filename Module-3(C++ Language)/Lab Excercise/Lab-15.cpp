/*
	Array Sum and Average 
	Aim :- Write a C++ program that accepts an array of integers, calculates the sum and average,and displays the results. 
*/
#include<iostream>
using namespace std;

int main()
{
    int a[5];
    int row,sum=0,avg=0;
    
    for(row=0;row<=5;row++){
        cout<<"Enter the Integers = ";
        cin>>a[row];
    }
    for(row=0;row<=5;row++){
        cout<<"\nIntegers Value = ";
        cout<<a[row];
        sum = sum + a[row];
        avg = sum / 5;
    }
    cout<<endl;
    cout<<"\nSum of array element = "<<sum;
    cout<<endl;
    cout<<"\nAverage of array element = "<<avg;
    return 0;
}