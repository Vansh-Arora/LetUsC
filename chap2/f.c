/* If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three. */

#include<stdio.h>
int main()
{
    int ram_age, shyam_age, ajay_age;
    printf("Enter the age of Ram, Shyam and Ajay respectively\n");
    scanf("%d%d%d",&ram_age, &shyam_age, &ajay_age);
    if(ram_age == shyam_age && ram_age == ajay_age)
        printf("All are of same age");
    
    else if(ram_age == shyam_age)
    {
        if(ram_age < ajay_age)
            printf("Ram and Shyam are equal in age and younger than Ajay");
        else
            printf("Ajay is youngest.");
    }

    else if(ram_age == ajay_age)
    {
        if(ram_age < shyam_age)
            printf("Ram and Ajay are equal in age and younger than Shyam");
        else
            printf("Shyam is youngest.");
    }

    else if(shyam_age == ajay_age)
    {
        if(shyam_age < ram_age)
            printf("Shyam and Ajay are equal in age and younger than Ram");
        else
            printf("Ram is youngest.");
    }

    else if(ram_age < shyam_age && ram_age < ajay_age)
        printf("Ram is youngest.");

    else if(shyam_age < ram_age && shyam_age < ajay_age)
        printf("Shyam is youngest.");

    else
        printf("Ajay is youngest.");
    
    return 0;
}