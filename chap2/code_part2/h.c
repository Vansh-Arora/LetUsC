#include<stdio.h>
int main()
{
    int hrs;
    printf("Enter the time required to complete job\n");
    scanf("%d",&hrs);
    if( hrs>=2 && hrs<3)
        printf("Highly efficient\n");
    else if( hrs>=3 && hrs<4)
        printf("Improve speed!\n");
    else if( hrs>=4 && hrs<=5 )
        printf("Speed improvement training.\n");
    else if( hrs>5 )
        printf("Leave the company.\n");
    return 0;
}