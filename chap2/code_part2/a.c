/* Any year is entered through the keyboard, write a program to determine whether the year is leap or not.
 Use the logical operators && and ||. */
#include<stdio.h>
int main()
{
    int year;
    printf("Enter an year: ");
    scanf("%d", &year);
    // Conditions for a leap year
    // Either a multiple of 400
    // Or a multiple of 4 but not 100
    if((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0))
        printf("Leap year");
    else
        printf("Not a leap year");
    return 0;
}