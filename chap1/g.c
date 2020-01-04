/*If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits.*/

#include<stdio.h>
#include"digit.h"
int main()
{
    int five_digit_num;
    printf("Enter a five digit number: ");
    scanf("%d",&five_digit_num);
    //int number_of_digits = digi_counter(five_digit_num);
    if(digi_counter(five_digit_num) != 5)
    {
        printf("Not a five digit number.");
        return 0;
    }
    printf("Sum of digits: %d", digi_sum(five_digit_num));
    return 0;
}