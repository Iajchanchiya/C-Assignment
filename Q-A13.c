#include <stdio.h>

int countWords(char str[]) {
    int count = 0;
    int isWord = 0;
	int i;

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            isWord = 0;
        } else if (!isWord) {

            isWord = 1;
            count++;
        }
    }

    return count;
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    int wordCount = countWords(inputString);

    printf("Total number of words: %d\n", wordCount);

    return 0;
}

