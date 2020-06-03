/* Find the absolute value of a number entered through the keyboard */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Absolute value: %d",abs(n));
    return 0;
}