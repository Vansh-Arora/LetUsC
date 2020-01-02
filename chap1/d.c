/*Temperature of a city in Fahrenheit degrees is input through the keyboard. 
Write a program to convert this temperature into Centigrade degrees. */

#include<stdio.h>
int main()
{
    float temp_in_farenheit;
    printf("Enter temperature in Farenheit: ");
    scanf("%f",&temp_in_farenheit);
    printf("Temperature in centigrade is %.2fC\n",(temp_in_farenheit-32)*(5.0/9.0));
    return 0;
}