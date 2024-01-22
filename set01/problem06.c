//6. Write a C program to compare three numbers using **pass by reference**
#include<stdio.h>
int input();
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main(){
    int a,b,c,lar;
    a=input();
    b=input();
    c=input();
    compare(a,b,c,&lar);
    output(a,b,c,lar);
    return 0;
}
int input()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    return a;
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