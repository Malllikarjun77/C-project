#include "/home/ec2-user/dev5/C-project/include/math_utils.h"

int find_biggest(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}
