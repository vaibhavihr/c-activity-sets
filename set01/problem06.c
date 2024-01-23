//6. Write a C program to compare three numbers using **pass by reference**
#include<stdio.h>
void input(int *a,int *b,int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main(){
    int a,b,c,lar;
   input(&a, &b, &c);
    compare(a,b,c,&lar);
    output(a,b,c,lar);
    return 0;
}
void input(int *a,int *b,int *c)
{
    printf("Enter three number:");
    scanf("%d %d %d",a,b,c);
    
}
void compare(int a, int b, int c, int *largest)
{
    if (a>b&&a>c)
    {
        *largest=a;
    }
    else if (b>a&&b>c)
    {
        *largest=b;
    }
    else
    {
        *largest=c;
    }
    
}
void output(int a, int b, int c, int largest)
{
    printf("Largest of %d, %d ,%d is %d",a,b,c,largest);
}