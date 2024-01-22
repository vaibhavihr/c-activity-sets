//5. Write a C program to compare three numbers using **pass by value**
#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main(){
int a,b,c,larg;
a=input();
b=input();
c=input();
larg=compare(a,b,c);
output(a,b,c,larg);
return 0;
}
int input()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    return a;
}
int compare(int a, int b, int c)
{
    if (a>b&&a>c)
    {
        return a;
    }
    else if (b>a&&b>c)
    {
       return b;
    }
    else
    {
        return c;
    }
    
    
}
void output(int a, int b, int c, int largest)
{
    printf("Largest of %d,%d,%d is %d",a,b,c,largest);
}

