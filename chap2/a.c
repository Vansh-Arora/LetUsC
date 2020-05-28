/*If cost price and selling price of an item is input through the keyboard,
 write a program to determine whether the seller has made profit or incurred loss.
  Also determine how much profit he made or loss he incurred. */

#include<stdio.h>
int main()
{
    float cp,sp;
    printf("Enter cost price: ");
    scanf("%f",&cp);
    printf("Enter selling price: ");
    scanf("%f",&sp);
    if(sp > cp)
        printf("Seller has made profit of rupees %.1f\n",sp - cp);
    else
        printf("Seller has incurred loss of rupees %.1f\n",cp - sp);
    return 0;
}