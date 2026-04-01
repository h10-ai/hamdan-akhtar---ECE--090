#include <stdio.h>

int main() {
    int x, i;
    int c = 0;

    printf("Enter the number to check for prime or not: ");
    scanf("%d", &x);

    // Prime numbers must be greater than 1
    if (x <= 1) {
        printf("%d is not a prime number.\n", x);
    } 
    else {
        // Loop from 1 to x to count divisors
        for (i = 1; i <= x; i++) {
            if (x % i == 0) {
                c++;
            }
        }

        // A prime number has exactly 2 divisors: 1 and itself
        if (c == 2) {
            printf("%d is a Prime number.\n", x);
        } else {
            printf("%d is not a Prime number.\n", x);
        }
    }

    return 0;
}

