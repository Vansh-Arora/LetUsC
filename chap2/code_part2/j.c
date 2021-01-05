#include<stdio.h>
int main()
{
    int credit;
    int order;
    int stock = 50;
    printf("Enter customer's credit and order.\n");
    scanf("%d%d",&credit,&order);
    if(order*100 < credit)
    {
        if(order <= stock)
            printf("Supply has requirment.\n");
        else
            printf("%d items will be shipped later.",order-stock);
    }
    else
        printf("Credit not OK");
    return 0;

}