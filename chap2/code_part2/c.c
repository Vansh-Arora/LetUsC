#include<stdio.h>

int main()
{
    int hag[3];
    printf("Enter person's health status\nFor good health: 1\nFor poor health: 0\n");
    scanf("%d",&hag[0]);
    printf("Enter person's age\n");
    scanf("%d",&hag[1]);
    printf("Enter gender\nMale: 1\nFemale: 0\n");
    scanf("%d",&hag[2]);
    if( hag[1] >= 25 && hag[1] <= 35 )
        {
            if(hag[0] == 1 && hag[2] == 1)
                printf("Premium: 4 per thousand\nMax Policy amount: 2Lakhs");
            else if(hag[0] == 1 && hag[2] == 0)
                printf("Premium: 3 per thousand\nMax Policy amount: 1Lakh");
            else if(hag[0] == 0 && hag[2] == 1)
                printf("Premium: 6 per thousand\nMax Policy amount: 10,000");
            else
                printf("Not insured.");
            
        }
    else
        printf("Not insured.");
    return 0;
}