#include <stdio.h>

int findSecondSmallest(int array[], int size) {
    int smallest, secondSmallest;
    int i;

    if (size < 2) {
        printf("Array should have at least two elements to find the second smallest.\n");
        return -1; 
    }

    if (array[0] < array[1]) {
        smallest = array[0];
        secondSmallest = array[1];
    } else {
        smallest = array[1];
        secondSmallest = array[0];
    }

    for ( i = 2; i < size; i++) {
        if (array[i] < smallest) {
            secondSmallest = smallest;
            smallest = array[i];
        } else if (array[i] < secondSmallest && array[i] != smallest) {
            secondSmallest = array[i];
        }
    }

    return secondSmallest;
}

int main() {

    int array[] = {10, 5, 8, 2, 7};

    int size = sizeof(array) / sizeof(array[0]);

    int secondSmallest = findSecondSmallest(array, size);

    if (secondSmallest != -1) {

        printf("The second smallest number is: %d\n", secondSmallest);
    }

    return 0;
}

