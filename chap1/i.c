/* If a four-digit number is input through the keyboard, write a program to obtain the sum of the first and last digit of this number. */
#include<stdio.h>
#include"digit.h"
int main()
{
    int four_digit_number;
    printf("Enter a four digit number: ");
    scanf("%d",&four_digit_number);
    if(digi_counter(four_digit_number) != 4)
    {
        printf("Not a 4 digit number\n");
        return 0;
    }
    int *digits = digi_array(four_digit_number,4);
    printf("Sum of first and last digit: %d\n",digits[0] + digits[3]);
    return 0;
}