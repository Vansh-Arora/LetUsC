/* Given the coordinates (x, y) of a center of a circle and it’s radius, 
write a program which will determine whether a point lies inside the circle,
 on the circle or outside the circle. */

#include<stdio.h>
#include<math.h>
int main()
{
    int centre[2];
    int radius;
    int point[2];
    int distance;

    printf("Enter the co-ordinates of centre of circle\n");
    scanf("%d%d",&centre[0],&centre[1]);
    printf("Enter radius of circle\n");
    scanf("%d",&radius);
    printf("Enter co-ordinates of point\n");
    scanf("%d",&point[0],&point[1]);
    
    distance = ( pow((point[1] - center[1]),2) ) + ( pow((point[0] - centre[0]),2) );

    if( distance == radius )
        printf("Point lies on the circle.");
    else if(distance < radius)
        printf("Point lies inside the circle.");
    else if(distance > radius)
        printf("Point lies outside the circle.");
    
    return 0;
}