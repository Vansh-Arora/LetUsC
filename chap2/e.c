/*A five-digit number is entered through the keyboard.
 Write a program to obtain the reversed number and to 
 determine whether the original and reversed numbers are equal or not.*/

#include<stdio.h>
#include"F:\LetUsC\chap1\digit.h"
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int reversed_n = reverse_digits(n);
    if( n == reversed_n)
        printf("Reversed and original number are same.");
    else
        printf("Reversed and original number are not same.");
    return 0;
}
