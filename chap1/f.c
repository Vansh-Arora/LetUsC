/*Two numbers are input through the keyboard into two locations C and D. 
Write a program to interchange the contents of C and D. */

#include<stdio.h>
int main()
{
    int C,D;
    printf("Enter a number in C: ");
    scanf("%d",&C);
    printf("Enter a number in D: ");
    scanf("%d",&D);
    C = C + D;
    D = C - D;
    C = C - D;
    printf("After Interchange\nValue of C: %d\nValue of D: %d\n",C,D);   
    return 0;
}