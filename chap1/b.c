/* The distance between two cities (in km.) is input through the keyboard. 
Write a program to convert and print this distance in meters, feet, inches and centimeters. */

#include<stdio.h>
int main()
{
    float distance_in_km;
    printf("Enter distance in Kilometers: ");
    scanf("%f",&distance_in_km);
    printf("Distance in meters is: %.2f meters\n",distance_in_km*1000);
    printf("Distance in centimeters is: %.2f centimeters\n",distance_in_km*100000);
    printf("Distance in inches is: %.2f inches\n",distance_in_km*1000*39.37);
    printf("Distance in feet is %.2f feet\n",distance_in_km*1000*3.281);
    return 0;
}