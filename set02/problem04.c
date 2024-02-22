/*04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.*/
#include <stdio.h>

int input_array_size();
void input_array(int n, int a[]);
int is_composite(int num);
int sum_composite_numbers(int n, int a[]);
void output(int sum);

int main() {
    int size = input_array_size();
    int array[size];
    input_array(size, array);
    int sum = sum_composite_numbers(size, array);
    output(sum);
    return 0;
}

int input_array_size() {
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    return n;
}

void input_array(int n, int a[]) {
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int is_composite(int num) {
    if (num <= 1) 
        return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 1; 
    }
    return 0;
}

int sum_composite_numbers(int n, int a[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (is_composite(a[i])) {
            sum += a[i];
        }
    }
    return sum;
}

void output(int sum) {
    printf("Sum of composite numbers: %d\n", sum);
}
