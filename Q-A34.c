#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[100];
    int data;

    printf("Enter the filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error opening file. Make sure the file exists.\n");
        exit(EXIT_FAILURE);
    }

    printf("Data from file:\n");
    while (fscanf(file, "%d", &data) != EOF) {
        printf("%d\n", data);
    }

    fclose(file);

    return 0;
}

