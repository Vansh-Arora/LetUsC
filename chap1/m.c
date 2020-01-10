/* If a five-digit number is input through the keyboard, 
write a program to print a new number by adding one to each of its digits. 
For example if the number that is input is 12391 then the output should be displayed as 23402. */

#include<stdio.h>
#include"digit.h"
int main()
{
    int five_digit_number;
    printf("Enter a five digit number: ");
    scanf("%d",&five_digit_number);
    if(digi_counter(five_digit_number) != 5)
    {
        printf("Not a five digit number");
        return 0;
    }
    int *digits = digi_array(five_digit_number,5);
    int i;
    printf("Required number: ");
    for(i=0;i<5;i++)
        printf("%d",(digits[i]+1)%10);
    return 0;
}