//2. Write a C program to add two numbers.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    // c=a+b;
    printf("%d + %d = %d",a,b,a+b);
    return 1;
}