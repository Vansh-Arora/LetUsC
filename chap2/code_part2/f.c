#include<stdio.h>
int main()
{
    int tri[3];
    printf("Enter length of three sides of triangle.\n");
    for(int i = 0; i<3; i++)
        scanf("%d",&tri[i]);
    if(tri[0] >= tri[1] && tri[0] >= tri[2])
    {
        if( (tri[1] + tri[2]) > tri[0] )
            printf("Triangle is valid.\n");
        else
            printf("Triangle is not valid.\n");
    }
    else if(tri[1] > tri[0] && tri[1] > tri[2])
    {
        if( (tri[0] + tri[2]) > tri[1] )
            printf("Triangle is valid.\n");
        else
            printf("Triangle is not valid.\n");            
    }
    else if(tri[2] > tri[1] && tri[2] > tri[0])
    {
        if( (tri[1] + tri[0]) > tri[2] )
            printf("Triangle is valid.\n");
        else
            printf("Triangle is not valid.\n");
    }
        
    return 0;
}