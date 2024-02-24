//06. Write a program to reverse a string.

#include <stdio.h>
#include <string.h>

void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);

int main(){
    char original[100], reversed[100];

    input_string(original);
    str_reverse(original, reversed);
    output(original, reversed);

    return 0;
}

void input_string(char *a){
    printf("Enter the string: ");
    scanf("%s", a);
}

void str_reverse(char *str, char *rev_str){
    int length = strlen(str);
    int i, j;

    for (i = length - 1, j = 0; i >= 0; i--, j++){
        rev_str[j] = str[i];
    }
    rev_str[j] = '\0';
}

void output(char *a, char *reverse_a){
    printf("Original String: %s\n", a);
    printf("Reversed String: %s\n", reverse_a);
}
