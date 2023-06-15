#include <stdio.h>

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int coins[n];
    int sum = 0;

    printf("Enter the count of coins in each bag:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &coins[i]);
        sum += coins[i];
    }

    printf("Count the number of coins in each bag: ");
    for (int i = 0; i < n; i++) {
        printf("%d", coins[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }

    printf("\nSum of all the coins is: %d\n", sum);

    return 0;
}
