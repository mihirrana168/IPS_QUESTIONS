#include <stdio.h>
#include <string.h>
#define max_length 10
#define max_entries 50      

struct Country {
    
    char name[max_length];
    char capital[max_length];
};

void initialize_Data(struct Country data[], int size) {
    
    strcpy(data[0].name, "india");
    strcpy(data[0].capital, "new delhi");

    strcpy(data[1].name, "australia");
    strcpy(data[1].capital, "sydney");

    strcpy(data[2].name, "bangladesh");
    strcpy(data[2].capital, "dhaka");
    
    strcpy(data[2].name, "bhutan");
    strcpy(data[2].capital, "thimpu");
    
    strcpy(data[2].name, "canada");
    strcpy(data[2].capital, "toronto");
    
    strcpy(data[2].name, "china");
    strcpy(data[2].capital, "bejing");
    
    strcpy(data[2].name, "japan");
    strcpy(data[2].capital, "tokyo");

    
}

int main() {
    struct Country data[max_entries];
    int size = 7;  
    char input[max_length];

    initialize_Data(data, size);

    while (1) {
        printf("Enter a country or capital name (End to exit): ");
        scanf("%s", input);

        if (strcmp(input, "End") == 0)
            break;

        int found = 0;
        for (int i = 0; i < size; i++) {
            if (strcmp(data[i].name, input) == 0) {
                printf("Capital: %s\n", data[i].capital);
                found = 1;
                break;
            } else if (strcmp(data[i].capital, input) == 0) {
                printf("Country: %s\n", data[i].name);
                found = 1;
                break;
            }
        }

        if (!found)
            printf("No matching country or capital found.\n");

        printf("\n");
    }

    return 0;
}
