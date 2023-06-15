#include <stdio.h>

int find_GCD(int x, int y) {
    int remainder;

    while (y != 0) {
        remainder = x % y;
        x = y;
        y = remainder;
    }

    return x;
}

int find_LCM(int x, int y) {
    int gcd = find_GCD(x, y);
    int lcm = (x * y) / gcd;

    return lcm;
}

int main() {
    int x, y;

    printf("Enter the first number : ");
    scanf("%d", &x);

    printf("Enter the second number : ");
    scanf("%d", &y);

    int lcm = find_LCM(x, y);

    printf("LCM of %d and %d is: %d\n", x, y, lcm);

    return 0;
}
