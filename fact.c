#include <stdio.h>
#include <limits.h> // For INT_MAX verification

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n < 0) return 0; // Factorial of negative numbers is undefined
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        // Check for overflow before multiplying
        if (fact > ULLONG_MAX / i) {
            printf("Error: Factorial exceeds maximum value!\n");
            return 0;
        }
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    
    printf("Enter a positive integer (0-20): ");
    if (scanf("%d", &num) != 1) {
        printf("Error: Invalid input (not a number)\n");
        return 1;
    }
    
    // Input validation
    if (num < 0) {
        printf("Error: Factorial of negative numbers is undefined.\n");
        return 1;
    }
    if (num > 20) {
        printf("Error: Factorial of %d will overflow 64-bit integer.\n", num);
        return 1;
    }
    
    unsigned long long result = factorial(num);
    if (result != 0) {
        printf("Factorial of %d = %llu\n", num, result);
    }
    
    return 0;
}
