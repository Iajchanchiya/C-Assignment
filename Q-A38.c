#include <stdio.h>
struct Pair {
    int a;
    int b;
};

void swapUsingPointers(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

struct Pair swapUsingStructure(struct Pair p) {
    struct Pair temp;
    temp.a = p.b;
    temp.b = p.a;
    return temp;
}

int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    swapUsingPointers(&num1, &num2);
    printf("\nAfter swapping using pointers:\n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);

    struct Pair numbers;
    numbers.a = num1;
    numbers.b = num2;
    struct Pair swappedNumbers = swapUsingStructure(numbers);
    printf("\nAfter swapping using a structure:\n");
    printf("First number: %d\n", swappedNumbers.a);
    printf("Second number: %d\n", swappedNumbers.b);

    return 0;
}

