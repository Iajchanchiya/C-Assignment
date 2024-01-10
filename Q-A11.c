#include <stdio.h>
void convertToUpperCase(char str[]) {
	int i;
    for ( i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

void convertToLowerCase(char str[]) {
	int i;
    for ( i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    convertToUpperCase(inputString);
    printf("Uppercase: %s", inputString);

    convertToLowerCase(inputString);
    printf("Lowercase: %s", inputString);

    return 0;
}

