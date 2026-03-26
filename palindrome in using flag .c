//check palindrome using array
#include <stdio.h>

int main() {
    int n, temp, r, a[10];
    int i = 0;
    printf("Enter any number: ");
    scanf("%d", &n);
    
    temp = n;
    while (temp != 0) {
        r = temp % 10; // Get last digit
        a[i] = r; // Store in array
        temp = temp / 10; // Remove last digit
        i++;
    }

    // Check for palindrome
    int isPalindrome = 1; // Assume it is a palindrome
    for (int j = 0; j < i/2; j++) {
        if (a[j] != a[i - j - 1]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
