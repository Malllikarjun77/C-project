#include <stdio.h>

unsigned long long factorial(int n) {
    if (n < 0) {
        return 0; // Factorial of negative numbers is undefined
    }
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

fact() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    unsigned long long result = factorial(num);
    if (result == 0) {
        printf("Error: Factorial of negative numbers is undefined.\n");
    } else {
        printf("Factorial of %d = %llu\n", num, result);
    }

    return 0;
}
