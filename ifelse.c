#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of the integer: ");
    scanf("%d", &n);

    if (n % 2 == 1) {
        printf("Weird\n");
    } else {
        if (n >= 2 && n <= 5) {
            printf("Not Weird\n");
        } else if (n >= 6 && n <= 20) {
            printf("Weird\n");
        } else {
            printf("Not Weird\n");
        }
    }

    return 0;
}
