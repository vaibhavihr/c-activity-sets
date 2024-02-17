#include<stdio.h>

void swap(int *pa, int *pb)
{
    // *pa=10;
    // *pb=20;
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    printf("a=%d,b=%d\n",a,b);
    // int a,b;
    swap(&a,&b); 
    printf("after swaping a=%d b=%d\n",a,b);
    return 0;
}

