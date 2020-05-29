/*According to the Gregorian calendar, it was Monday on the date 01/01/1900. 
If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.*/
#include<stdio.h>
int main()
{
    int year;
    int days_left; // Days that are not a part of full week.
    int century = 1900; // Century years 
    printf("Enter an year after 1899!\n");
    scanf("%d",&year);
    int gap = year - 1900; // Years between 1900 and input year
    int days = gap * 365;  // considering each year to have 365 days, number of days in between
    // FINDING TOTAL NUMBER OF LEAP YEARS
    int leap_years = gap / 4; // leap years occur once in 4 years
    if(gap % 4 > 0) // Every 4th year is leap year
        leap_years += 1;
    // To check if century year is a leap year
    while(century < year)
    {
        // We have already counted the century year in leap year
        if( (century % 400 != 0) && (leap_years > 0) )
            leap_years--; // if century year is not leap 
        century += 100;
    }
    // with each leap year 1 day will increase
    days = days + leap_years;
    days_left = days % 7;

// PRINT THE DAY-----------------------------
    if(days_left==0)
        printf("Monday");
    else if(days_left==1)
        printf("Tuesday");
    else if(days_left==2)
        printf("Wednesday");
    else if(days_left==3)
        printf("Thursday");
    else if(days_left==4)
        printf("Friday");
    else if(days_left==5)
        printf("Saturday");
    else if(days_left==6)
        printf("Sunday");
    else
        printf("Enter an year after 1899!");

//-------------------------------------------
    return 0;
}