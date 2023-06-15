#include <stdio.h>

int no_of_digits(int num) {
    int count = 0;

    while (num != 0) {
        num /= 10;
        count++;
    }

    return count;
}

int no_odd_digits(int num) {
    int count = 0;

    while (num != 0) {
        int digit = num % 10;
        if (digit % 2 != 0) {
            count++;
        }
        num /= 10;
    }

    return count;
}

int sum_of_digits(int num) {
    int sum = 0;

    while (num != 0) {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }

    return sum;
}

int reverse_Number(int num) {
    int reversed_Number = 0;

    while (num != 0) {
        int digit = num % 10;
        reversed_Number = reversed_Number * 10 + digit;
        num /= 10;
    }

    return reversed_Number;
}

void Equivalent_word(int num) {
    char* word[] = {
        "Zero", "One", "Two", "Three", "Four",
        "Five", "Six", "Seven", "Eight", "Nine"
    };

    while (num != 0) {
        int digit = num % 10;
        printf("%s ", word[digit]);
        num /= 10;
    }

    printf("\n");
}

int main() {
    int choice;
    int number;

    do {
        printf("Menu:\n");
        printf("1. Number of digits\n");
        printf("2. Count of odd digits\n");
        printf("3. Sum of all digits\n");
        printf("4. Reverse of the digits\n");
        printf("5. Word equivalent of the number\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &number);
                printf("Number of digits: %d\n", no_of_digits(number));
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &number);
                printf("Count of odd digits: %d\n", no_odd_digits(number));
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &number);
                printf("Sum of all digits: %d\n", sum_of_digits(number));
                break;
            case 4:
                printf("Enter a number: ");
                scanf("%d", &number);
                printf("Reverse of the digits: %d\n", reverse_Number(number));
                break;
            case 5:
                printf("Enter a number: ");
                scanf("%d", &number);
                printf("Word equivalent of the number: ");
                Equivalent_word(number);
                break;
            case 0:
                printf("Thank you. Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

        printf("\n");
    } while (choice != 0);

    return 0;
}
