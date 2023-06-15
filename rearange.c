#include<stdio.h>
#include <string.h>

void rearrange_func(char** strs, int n) {
    int i, j;
    char* temp;

    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(strs[j], strs[j + 1]) > 0) {
                
                temp = strs[j];
                strs[j] = strs[j + 1];
                strs[j + 1] = temp;
            }
        }
    }
}

int main() {
    char* strs[] = {"Uma", "Rani", "Soma", "Kannan"};
    int n = sizeof(strs) / sizeof(strs[0]);
    int i;

    printf(" the array Before sorting :\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", strs[i]);
    }

    rearrange_func(strs, n);

    printf("\nthe array After sorting:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", strs[i]);
    }

    return 0;
}
