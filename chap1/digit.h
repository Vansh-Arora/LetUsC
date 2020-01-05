
/* Count the number of digits in a given number */

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