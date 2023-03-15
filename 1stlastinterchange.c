#include <stdio.h>

int main() {
    int num, first_digit, last_digit, digits_in_between, reversed_num;
    printf("Enter a number: ");
    scanf("%d", &num);
    last_digit = num % 10;
    digits_in_between = num / 10;
    first_digit = 0;

    while (digits_in_between > 0) 
    {
        first_digit = digits_in_between % 10;
        digits_in_between /= 10;
    reversed_num = last_digit;
    reversed_num = reversed_num * 10 + digits_in_between;
    reversed_num = reversed_num * 10 + first_digit;
    }
    printf(" %d", reversed_num);
    return 0;
}