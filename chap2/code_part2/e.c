#include<stdio.h>
int main()
{
    int days;
    float fine;
    printf("Enter number of days past due date\n");
    scanf("%d",&days);
    if(days <= 5)
        fine = 0.5;
    else if(days > 5 && days <= 10)
        fine = 1;
    else if(days > 10 && days <= 30)
        fine = 5;
    else
        fine = 5.2;
    
    if(fine <= 5)
        printf("Fine: Rs%.2f",fine);
    else
        printf("Membership Cancelled");
    return 0;
}