#include <stdio.h>

int main() {

    int array[10],i;
    
    printf("Enter ten elements:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int maxNumber = array[0];
    for (i = 1; i < 10; i++) {
        if (array[i] > maxNumber) {
            maxNumber = array[i];
        }
    }

    printf("\nThe maximum number is: %d\n", maxNumber);

    return 0;
}

