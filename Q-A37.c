#include <stdio.h>
#define SQUARE(x) ((x) * (x))

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = SQUARE(num);

    printf("Square of %d is: %d\n", num, result);

    return 0;
}

