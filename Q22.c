#include <stdio.h>

int main() {
    int array[10],i;
    
    printf("Enter ten elements:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int evenCount = 0, oddCount = 0;
    for (i = 0; i < 10; i++) {
        if (array[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("\nTotal even numbers: %d\n", evenCount);
    printf("Total odd numbers: %d\n", oddCount);

    return 0;
}

