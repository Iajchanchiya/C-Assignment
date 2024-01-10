#include <stdio.h>
void printReverse(char str[]) {
    int i,length = 0;

    while (str[length] != '\0') {
        length++;
    }

    printf("String in reverse order: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    printReverse(inputString);

    return 0;
}

