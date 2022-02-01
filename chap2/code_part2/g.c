#include<stdio.h>
int main()
{
    int tri[3];
    printf("Enter length of three sides of triangle.\n");
    for(int i = 0; i<3; i++)
        scanf("%d",&tri[i]);
    
    if(tri[0] == tri[1] && tri[1] == tri[2])
    {
        printf("Equilateral Triangle.\n");
    }
    else if(tri[0] != tri[1] && tri[1] != tri[2])
    {
        printf("Scalene Triangle.\n");
    }
    else if(tri[0] == tri[1] || tri[0] == tri[2] || tri[1] == tri[2])
    {
        printf("Iscoceles Triangle.\n");
    }
        
    return 0;
}