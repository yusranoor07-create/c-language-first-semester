#include <stdio.h>

int main() {
    int num, temp, sum = 0, digit, reversed = 0, i, isPrime = 1;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    temp = num;

    // Find sum of digits
    while (temp != 0) {
        digit = temp % 10;
        sum += digit;
        temp /= 10;
    }

    printf("Sum of digits = %d\n", sum);

    // If sum of digits is even ? check prime
    if (sum % 2 == 0) {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);
    }

    // If sum of digits is odd ? check palindrome
    else {
        temp = num;
        while (temp != 0) {
            digit = temp % 10;
            reversed = reversed * 10 + digit;
            temp /= 10;
        }
        if (num == reversed)
            printf("%d is a palindrome number.\n", num);
        else
            printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}


