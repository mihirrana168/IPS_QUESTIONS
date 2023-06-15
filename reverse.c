#include <stdio.h>
#include <string.h>

void reverse_func(char *str) {
    int length = strlen(str);
    char *begin = str;
    char *end = str + length - 1;

    while (begin < end) {
        char temp = *begin;
        *begin = *end;
        *end = temp;

        begin++;
        end--;
    }
}

int main() {
    char str[] = "FUNCTION";
    printf("the Original string is : %s\n", str);

    reverse_func(str);

    printf("the Reversed string is : %s\n", str);

    return 0;
}
