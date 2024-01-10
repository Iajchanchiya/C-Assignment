#include <stdio.h>

int main() {

    int a[5],i;

    printf("Enter five value:\n");
    for ( i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &a[i]);
    }


    printf("\nEntered value is :\n");
    for ( i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

