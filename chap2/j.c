/* Given three points  (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.  */
// Three or more points are collinear, if slope of any two pairs of points is same.

#include<stdio.h>
int main()
{
    int A[2];
    int B[2];
    int C[2];
    int i;
    printf("Enter the co-ordinates of point A\n");
    scanf("%d%d",&A[0],&A[1]);
    printf("Enter the co-ordinates of point B\n");
    scanf("%d%d",&B[0],&B[1]);
    printf("Enter the co-ordinates of point C\n");
    scanf("%d%d",&C[0],&C[1]);
    int slope_AC = (C[1] - A[1]) / (C[0] - A[0]);
    int slope_BC = (C[1] - B[1]) / (C[0] - B[0]);
    if(slope_AC == slope_BC)
        printf("Points are collinear.");
    return 0;
}