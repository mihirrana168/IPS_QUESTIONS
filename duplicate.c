#include <stdio.h>

int main() {
    int size;

    printf("Enter the value of size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter the elements of the array:\n");
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    printf("the Original array is :\n");
    
    for (int i = 0; i < size; i++) {
        printf("%d\n", array[i]);
    }

    
    int removed_Elements[size];
    int removed_Count = 0;

    for (int i = 0; i < size; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (array[i] == array[j]) {
                
                removed_Elements[removed_Count++] = array[i];
                break;
            }
        }

        if (j == i) {
            
            array[removed_Count] = array[i];
            removed_Count++;
        }
    }

    
    printf("the Removed elements are :\n");
    
    for (int i = 0; i < removed_Count; i++) {
        printf("%d\n", removed_Elements[i]);
    }

    
    
    printf("Revised array after the removal:\n");
    
    for (int i = 0; i < removed_Count; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
