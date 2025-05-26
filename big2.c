#include <stdio.h>

// Function to find the maximum of three numbers
int find_biggest(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

int biggest() {
    int num1, num2, num3;
    
    printf("Enter three integers separated by spaces: ");
    
    // Secure input handling
    if (scanf("%d %d %d", &num1, &num2, &num3) != 3) {
        printf("Error: Invalid input. Please enter three integers.\n");
        return 1; // Exit with error code
    }
    
    int biggest = find_biggest(num1, num2, num3);
    printf("The biggest number is: %d\n", biggest);
    
    return 0;
}
