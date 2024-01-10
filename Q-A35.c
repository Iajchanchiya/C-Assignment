#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inputFile, *outputFile;
    char inputFilename[100], outputFilename[100];
    int data;

    printf("Enter the input filename: ");
    scanf("%s", inputFilename);

    inputFile = fopen(inputFilename, "r");

    if (inputFile == NULL) {
        printf("Error opening input file. Make sure the file exists.\n");
        exit(EXIT_FAILURE);
    }

    printf("Enter the output filename: ");
    scanf("%s", outputFilename);

    // Open the output file for writing
    outputFile = fopen(outputFilename, "w");

    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        fclose(inputFile);
        exit(EXIT_FAILURE);
    }
    printf("Processing and writing data to the output file...\n");
    while (fscanf(inputFile, "%d", &data) != EOF) {

        int processedData = 2 * data;

        fprintf(outputFile, "%d ", processedData);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Data successfully processed and written to the output file.\n");

    return 0;
}

