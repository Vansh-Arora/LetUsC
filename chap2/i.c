/* Given the length and breadth of a rectangle, 
write a program to find whether the area of the rectangle is 
greater than its perimeter. For example, the area of the rectangle
 with length = 5 and breadth = 4 is greater than its perimeter*/

#include<stdio.h>
int main()
{
    int length, breadth;
    printf("Enter length and breadth of triangle respectively\n");
    scanf("%d%d",&length,&breadth);
    if( length * breadth > 2 * ( length + breadth) )
        printf("Area is greater than perimeter.");
    else
        printf("Area is not greater than perimeter.");
    return 0;   
}