#include <stdio.h>
#include <math.h>

int main() {
    char choice;
    float area;

    printf("Select a shape to find the area:\n");
    printf("Press t for Triangle\n");
    printf("Press r fot Rectangle\n");
    printf("Press c for Circle\n");
    printf("Enter your choice : ");
    scanf("%c", &choice);

    if (choice == 't') {

        float base, height;
        printf("Enter the base and height of the triangle: ");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("The area of the triangle is: %.2f\n", area);
    } else if (choice == 'r') {

        float length, width;
        printf("Enter the length and width of the rectangle: ");
        scanf("%f %f", &length, &width);
        area = length * width;
        printf("The area of the rectangle is: %.2f\n", area);
    } else if (choice == 'c') {
 
        float radius;
        printf("Enter the radius of the circle: ");
        scanf("%f", &radius);
        area = M_PI * radius * radius;
        printf("The area of the circle is: %.2f\n", area);
    } else {
        printf("Invalid choice!");
    }

    return 0;
}

