/*Any character is entered through the keyboard, 
 write a program to determine whether the character entered is a capital letter,
 a small case letter, a digit or a special symbol.*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    char character;
    printf("Enter any character: ");
    scanf("%c",&character);
    if(character <= 90 && character >= 65)
        printf("A capital letter");
    else if(character >= 97 && character <= 122)
        printf("Small letter");
    else if(character >= 48 && character <= 57)
        printf("A digit");
    else
        printf("A special character.");
    return 0;
}