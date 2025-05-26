#include "/home/ec2-user/dev5/C-project/include/math_utils.h"  // Path to your header

unsigned long long factorial(int n) {
    if (n < 0) return 0;
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}
