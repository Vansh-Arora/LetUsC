/* Given a point (x, y), write a program to find out if it lies on the x-axis, 
y-axis or at the origin, viz. (0, 0). */

#include<stdio.h>
int main()
{
    int point[2];
    printf("Enter the co-ordinates of point\n");
    scanf("%d%d",&point[0],&point[1]);
    
    if( point[0] == 0 && point[1] == 0 )
        printf("Point lies on origin.");
    else if( point[1] == 0 )
        printf("Point lies on x-axis.");
    else if( point[0] == 0 )
        printf("Point lies on y-axis.");
    else
        printf("Point neither lies on x-axis nor y-axis or origin.");
        
    return 0;
}