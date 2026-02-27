//Minimum and maximum digit find 
/*
	Output :-
	
	Enter the Number:- 1234
	Maximum Number :- 4
	Minimum Number :- 1
*/

#include<stdio.h>

int main()
{
    int num, digit;
    int max = 0, min = 9;

    printf("Enter the Number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        digit = num % 10;

        if(digit > max)
            max = digit;

        if(digit < min)
            min = digit;

        num = num / 10;
    }

    printf("Maximum Number : %d\n", max);
    printf("Minimum Number : %d\n", min);

    return 0;
}
