// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include <stdio.h>
int main()
{
    int l,w,area;
    printf("Length= ");
    scanf("%d",&l);
    printf("breadth= ");
    scanf("%d",&w);
    area=l*w;
    printf("Area of the rectangle= %d\n",area);
    
    return 0;
}