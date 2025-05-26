#include <stdio.h>

biggest2() {
    int num1, num2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2) {
        printf("%d is bigger than %d\n", num1, num2);
    }
    else if (num2 > num1) {
        printf("%d is bigger than %d\n", num2, num1);
    }
    else {
        printf("Both numbers are equal\n");
    }

    return 0;
}
