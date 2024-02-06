/*Write a program find whether a number is a composite number

> A Composite number has more than 2 factors.*/

#include<stdio.h>

int input_number();
int is_composite(int n);
void output(int n, int result);

int main() {
    int num = input_number();
    int result = is_composite(num);
    output(num, result);
    return 0;
}

int input_number() {
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    return n;
}

int is_composite(int n) {
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 1;
        }
    }
    return 0;
}

void output(int n, int result) {
    if (result==1) {
        printf("%d is a composite number.\n", n);
    } else {
        printf("%d is not a composite number.\n", n);
    }
}
