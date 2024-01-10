#include <stdio.h>

int findElementAtPosition(int array[], int size, int position) {

    if (position >= 1 && position <= size) {
        return array[position - 1];
    } else {
        printf("Invalid position. Please enter a position between 1 and %d.\n", size);
        return -1;
    }
}
int main() {
    int array[] = {10, 5, 8, 2, 7}; 

    int size = sizeof(array) / sizeof(array[0]);

    int position;
    printf("Enter the position to find the element: ");
    scanf("%d", &position);

    int element = findElementAtPosition(array, size, position);

    if (element != -1) {

        printf("The element at position %d is: %d\n", position, element);
    }
    return 0;
}

