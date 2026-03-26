#include <stdio.h>

int main() {
    int n, temp, a[10];
    int i = 0;

    printf("Enter any number: ");
    scanf("%d", &n);
    
    temp = n;
    while (temp != 0) {
        a[i] = temp % 10;
        temp = temp / 10;
        i++;
    }

    for (int j = 0; j < i / 2; j++) {
        // If any pair doesn't match, it's NOT a palindrome
        if (a[j] != a[i - j - 1]) {
            printf("The number isnotpalindrome");
            break;
            
        }
        else
        {
                printf("the number ist a palindrome");
        }      
            return 0; 
        }
    }
