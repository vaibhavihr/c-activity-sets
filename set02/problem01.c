//01.  Write a program to find the area of a triangle.//

#include<stdio.h>
#include<math.h>

void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
int main()
{
    float base,height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(base,height,area);
    return 0;
}
void input(float *base, float *height)
{
    printf("Enter the base of triangle:");
    scanf("%f",base);
    printf("Enter the height of triangle:");
    scanf("%f",height);
}
void find_area(float base , float height, float *area)
{
    *area= 0.5*(base*height);
}
void output(float base, float height, float area)
{
    printf("The area of the traingle with base %f and height %f is %f",base,height,area);
}