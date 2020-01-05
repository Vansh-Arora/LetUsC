/* If a five-digit number is input through the keyboard, write a program to reverse the number */

#include<stdio.h>
#include"digit.h"
int main()
{
    int five_digit_num;
    printf("Enter a five digit number: ");
    scanf("%d",&five_digit_num);
    if(digi_counter(five_digit_num) != 5)
    {
        printf("Not a five digit number.");
        return 0;
    }
    printf("Reversed number: %d",reverse_digits(five_digit_num));   
    return 0;
}