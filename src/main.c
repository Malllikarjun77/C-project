#include <stdio.h>
#include "/home/ec2-user/dev5/C-project/include/math_utils.h"  // Ensure this path is correct

int main() {
    int choice;
    printf("Choose operation:\n");
    printf("1. Factorial\n2. Find Biggest of Three Numbers\n> ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            // Factorial with input validation
            int num;
            printf("Enter a positive integer (0-20): ");
            if (scanf("%d", &num) != 1 || num < 0 || num > 20) {
                printf("Error: Invalid input! Must be 0-20.\n");
                return 1;
            }
            printf("Factorial of %d = %llu\n", num, factorial(num));
            break;
        }
        case 2: {
            // Biggest of three numbers
            int a, b, c;
            printf("Enter three integers (space-separated): ");
            if (scanf("%d %d %d", &a, &b, &c) != 3) {
                printf("Error: Invalid input! Need three integers.\n");
                return 1;
            }
            printf("Biggest of %d, %d, %d = %d\n", a, b, c, find_biggest(a, b, c));
            break;
        }
        default:
            printf("Error: Invalid choice!\n");
            return 1;
    }

    return 0;
}
