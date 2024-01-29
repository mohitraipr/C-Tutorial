#include<stdio.h>

int main() {
    // Variables for age and name
    int age;
    char name[] = "John";

    // Variables for arithmetic operations
    int n1, n2;

    // Variables for geometric calculations
    float radius, length, width, side;

    // Variable for cube calculation
    int cube;

    // Arithmetic operations
    printf("Enter number 1: \n");
    scanf("%d", &n1);

    printf("Enter number 2: \n");
    scanf("%d", &n2);

    printf("The sum of both numbers is:  %d\n", n1 + n2);
    printf("The subtraction of both numbers is:  %d\n", n1 - n2);
    printf("The multiplication of both numbers is:  %d\n", n1 * n2);
    
    // Check for division by zero before performing division
    if (n2 != 0) {
        printf("The division of both numbers is:  %d\n", n1 / n2);
    } else {
        printf("Cannot divide by zero.\n");
    }

    // Information about the user
    printf("Hello %s!\n", name);
    printf("Enter your age: \n");
    scanf("%d", &age);
    printf("Your age is: %d\n", age);

    // Area of square
    printf("Enter side of the square: \n");
    scanf("%f", &side);
    printf("Area of the square is: %f\n", side * side);

    // Area of circle
    printf("Enter radius of the circle: \n");
    scanf("%f", &radius);
    printf("Area of the circle is: %f\n", 3.14 * radius * radius);

    // Perimeter of rectangle
    printf("Enter the length of the rectangle: \n");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: \n");
    scanf("%f", &width);
    printf("Perimeter of the rectangle is: %f\n", 2 * (length + width));

    // Finding the cube of a number
    printf("Enter a number for cube calculation: ");
    scanf("%d", &cube);
    printf("Cube of the given number is: %d\n", cube * cube * cube);

    return 0;
}
