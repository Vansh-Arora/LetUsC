/* If the total selling price of 15 items and the total profit earned on them is input through the keyboard,
 write a program to find the cost price of one item.*/

#include<stdio.h>
int main()
{
    float total_selling_price;
    float profit;
    float cost_price_per_item;
    printf("Enter total selling price of 15 items: ");
    scanf("%f",&total_selling_price);
    printf("Enter total profit: ");
    scanf("%f",&profit);
    cost_price_per_item = (total_selling_price - profit) / 15;
    printf("Cost per item: %.2f",cost_price_per_item);
    return 0;
}