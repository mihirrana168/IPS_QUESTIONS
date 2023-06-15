#include <stdio.h>

void print_Leaders_func(int arr[], int size) {
    int max_element = arr[size - 1]; 
    printf("the Leaders are : %d ", max_element);

    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] > max_element) {
            printf("%d ", arr[i]);
            max_element = arr[i];
        }
    }

    printf("\n");
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    print_Leaders_func(arr, size);

    return 0;
}
