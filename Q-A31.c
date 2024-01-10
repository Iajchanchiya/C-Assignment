#include <stdio.h>

void concatenate(char *str1, char *str2) {

    while (*str1) {
        str1++;
    }

    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0'; 
}

int main() {
    char string1[100], string2[50];

    // Input the strings
    printf("Enter the first string:\n");
    gets(string1);
    printf("Enter the second string:\n");
    gets(string2);

    concatenate(string1, string2);

    printf("Concatenated string: %s\n", string1);

    return 0;
}
