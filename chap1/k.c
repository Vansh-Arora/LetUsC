/*A cashier has currency notes of denominations 10, 50 and 100.
 If the amount to be withdrawn is input through the keyboard in hundreds,
  find the total number of currency notes of each denomination the cashier will have to give to the withdrawer.*/

#include<stdio.h>
int main()
{
    int amount;
    printf("Enter amount to be withdrawn: ");
    scanf("%d",&amount);
    printf("100 rupee notes: %d\n", amount / 100);
    amount = amount % 100;
    printf("50 rupee notes: %d\n", amount / 50);
    amount = amount % 50;
    printf("10 rupee notes: %d", amount / 10);
    return 0;
}