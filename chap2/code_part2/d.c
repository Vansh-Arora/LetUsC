#include<stdio.h>
int main()
{
    float hct[3];
    int grade;
    printf("Enter hardness: ");
    scanf("%f",&hct[0]);
    printf("Enter Carbon content: ");
    scanf("%f",&hct[1]);
    printf("Enter Tensile Strength: ");
    scanf("%f",&hct[2]);

    if(hct[0] > 50)
        hct[0] = 1;
    else
        hct[0] = 0;
    if(hct[1] < 0.7)
        hct[1] = 1;
    else
        hct[1] = 0;
    if(hct[2] > 5600)
        hct[2] = 1;
    else
        hct[2] = 0;

    if(hct[0] && hct[1] && hct[2])
        grade = 10;
    else if(hct[0] && hct[1])
        grade = 9;    
    else if(hct[1] && hct[2])
        grade = 8;
    else if(hct[0] && hct[2])
        grade = 7;
    else if(hct[0] || hct[1] || hct[2])
        grade = 6;    
    else
        grade = 5;
    
    printf("Grade: %d",grade);
    return 0;
}