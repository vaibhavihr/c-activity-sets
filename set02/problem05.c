//05.  Write a program to find GCD _(HCF)_ of two numbers.
#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main(){
     int num1, num2;
    num1 = input();
    num2 = input();
    int gcd = find_gcd(num1, num2);
    output(num1, num2, gcd);
    return 0;
}
int input()
{
    int n;
    printf("Emter a number:");
    scanf("%d",&n);
    return n;
}
int find_gcd(int a, int b)
{
     while (b != 0) {
        a %= b;
        if (a == 0)
            return b;
        b %= a;
    }
    return a;
}
void output(int a, int b, int gcd)
{
     printf("GCD of %d and %d is %d\n", a, b, gcd);
}