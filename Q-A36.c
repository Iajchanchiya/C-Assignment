#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    int data;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "a");

    if (file == NULL) {
        printf("Error opening file. Make sure the file exists.\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter data to append (integer): ");
    scanf("%d", &data);

    fprintf(file, "%d ", data);

    fclose(file);

    printf("Data appended to the file successfully.\n");

    return 0;
}

