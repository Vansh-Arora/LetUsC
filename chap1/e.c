/*The length & breadth of a rectangle and radius of a circle are input through the keyboard.
 Write a program to calculate the area & perimeter of the rectangle, and the area & circumference of the circle.*/


#include<stdio.h>
int main()
{
    float length,breadth,radius;
    printf("In centimeters\nEnter length of rectangle: ");
    scanf("%f",&length);
    printf("Enter breadth of rectangle: ");
    scanf("%f",&breadth);
    printf("Enter radius of circle: ");
    scanf("%f",&radius);
    printf("Area of circle is %.2f square-cm\n",3.14*radius*radius);
    printf("Circumference of circle is %.2f cm\n",2*3.14*radius);
    printf("Area of rectangle is %.2f square-cm\n",length*breadth);
    printf("Perimeter of rectangle is %.2f cm\n",2*(length+breadth));
    return 0;
}