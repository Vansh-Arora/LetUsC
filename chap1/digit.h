
/* Count the number of digits in a given number */
#include<stdio.h>
#include<stdlib.h>
int digi_counter(int number)
{
    int digi_count = 0;
    while(number != 0)
    {
        digi_count += 1;
        number = number / 10;

    }
    return digi_count;
}

/* Sum of digits in a number*/

int digi_sum(int number)
{
    int sum = 0;
    while(number != 0)
    {
        sum += number % 10;
        number = number / 10;
    }
    return sum;
}

/* Reverse the digits of a number */

int reverse_digits(int number)
{
    int reverse = 0;
    while(number != 0)
    {
        reverse = (reverse * 10) + (number % 10);
        number /= 10;
    }
    return reverse;
}

/* Return array of digits of a number.
   Takes 2 arguments number and number of digits in number. */

int* digi_array(int number, int n)
{
    int *digits = (int*)malloc(n * sizeof(int));
    int i = n-1;
    while(number != 0)
    {
        digits[i] = number % 10;
        number /= 10;
        i--;
    }
    return digits;
}