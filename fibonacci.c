#include <stdio.h>

void fibonacci_Series_func(int n) {
    int a = 0;
    int b = 1;
    int c;
    int sum_Odd = 0;
    int sum_Even = 0;

    if (n >= 1) {
        printf("%d", a);
        sum_Even += a;
    }
    if (n >= 2) {
        printf(", %d", b);
        sum_Odd += b;
    }

    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf(", %d", c);

        if (i % 2 == 0) {
            sum_Even += c;
        } else {
            sum_Odd += c;
        }

        a = b;
        b = c;
    }

    printf("\n");
    printf("the Sum of numbers at odd positions: %d\n", sum_Odd);
    printf("the Sum of numbers at even positions: %d\n", sum_Even);
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d: ", n);
    fibonacci_Series_func(n);

    return 0;
}
