/* Ramesh’s basic salary is input through the keyboard. 
His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. 
Write a program to calculate his gross salary. */

#include<stdio.h>
int main()
{
    float base_salary;
    printf("Enter Ramesh's basic salary: ");
    scanf("%f",&base_salary);
    printf("Gross salary: %.2f", base_salary + 0.4*base_salary + 0.2*base_salary); // adding dearess allowance and house rent allowance
    return 0;
}