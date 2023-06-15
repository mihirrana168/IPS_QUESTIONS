#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int count_Words_func(const char* text) {
    int count = 0;
    bool in_Word = false;

    for (int i = 0; text[i] != '\0'; i++) {
        if (isalnum(text[i])) {
            if (!in_Word) {
                count++;
                in_Word = true;
            }
        } else {
            in_Word = false;
        }
    }

    return count;
}

int count_Sentences_func(const char* text) {
    int count = 0;

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!') {
            count++;
        }
    }

    return count;
}

int main() {
    const int max_Size = 1000;
    char input[max_Size];
    char* line;
    int total_Words = 0;
    int total_Sentences = 0;

    printf("please Enter the text (enter 'END' to stop):\n");

    while (1) {
        line = fgets(input, max_Size, stdin);
        if (line == NULL || strcmp(line, "END\n") == 0) {
            break;
        }

        total_Words += count_Words_func(line);
        total_Sentences += count_Sentences_func(line);
    }

    printf("\nhence the Total words are : %d\n", total_Words);
    printf("hence the Total sentences are : %d\n", total_Sentences);

    return 0;
}
