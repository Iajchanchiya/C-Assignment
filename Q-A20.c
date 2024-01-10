#include <stdio.h>

void printFibonacci(int n) {
    int i,firstTerm = 0, secondTerm = 1, nextTerm;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 1; i <= n; ++i) {
        printf("%d, ", firstTerm);
        nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
    printf("\n");
}

int main() {
    int value;

    printf("Enter the number for the Fibonacci series: ");
    scanf("%d", &value);

    if (value <= 0) {
        printf("Please enter a positive number of terms.\n");
    } else {
        printFibonacci(value);
    }

    return 0;
}

