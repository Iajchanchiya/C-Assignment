#include <stdio.h>

// Function to find the maximum number in an array
int findMaxNumber(int array[], int size) {
	int i;
    int maxNumber = array[0];

    for (i = 1; i < size; i++) {
        if (array[i] > maxNumber) {
            maxNumber = array[i];
        }
    }

    return maxNumber;
}

int main() {
    int size,i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Please enter a positive size for the array.\n");
    } else {
        int array[size];

        printf("Enter %d elements into the array:\n", size);
        for (i = 0; i < size; i++) {
            printf("Element %d: ", i + 1);
            scanf("%d", &array[i]);
        }

        int maxNumber = findMaxNumber(array, size);

        printf("The maximum number in the array is: %d\n", maxNumber);
    }

    return 0;
}

