/*02.  Write a program to find if a triangle is scalene.

> A triangle is scalene if all the three sides of the triangle are not equal to one another*/

#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int main(){
    int a,b,c,isscalene;
    a=input_side();
    b=input_side();
    c=input_side();
    isscalene=check_scalene(a,b,c);
    output(a,b,c,isscalene);
    return 0;
}
int input_side()
{
    int x;
    printf("Enter the side:");
    scanf("%d",&x);
    return x;
}
int check_scalene(int a, int b, int c)
{
    if (a!=b && b!=c && c!=a)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}
void output(int a, int b, int c, int isscalene)
{
    if (isscalene==1)
    {
        printf("The triangle with sides %d, %d and %d is scalene",a,b,c);
    }
    else if (isscalene==2)
    {
        printf("The triangle with sides %d, %d and %d is not scalene",a,b,c);
    }
    
}