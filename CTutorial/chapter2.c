#include <stdio.h>
#include <ctype.h>

int main() {
    // Program to check if a character is a digit or not
    char character;

    // Prompt user to enter a character
    printf("Enter a character: ");
    scanf(" %c", &character);

    // Check if the character is a digit using the isdigit function
    if (isdigit(character)) {
        printf("%c is a digit.\n", character);
    } else {
        printf("%c is not a digit.\n", character);
    }

    // Program to find the smallest of two numbers
    double num1, num2;

    // Prompt user to enter two numbers
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Determine the smallest number
    double smallest = (num1 < num2) ? num1 : num2;

    // Print the result
    printf("The smallest number is: %.2lf\n", smallest);

    // Program to print the average of three numbers
    int number1, number2, number3;

    // Prompt user to enter three numbers
    printf("Type the 1st number: ");
    scanf("%d", &number1);
    printf("Type the 2nd number: ");
    scanf("%d", &number2);
    printf("Type the 3rd number: ");
    scanf("%d", &number3);

    // Calculate and print the average
    int average = (number1 + number2 + number3) / 3;
    printf("The average is: %d\n", average);

    // Program to check if it's Monday or Raining
    int isMonday, isRaining;

    // Prompt user for inputs
    printf("Is it Monday? Type 1 to confirm: ");
    scanf("%d", &isMonday);

    printf("Is it Raining? Type 1 to confirm: ");
    scanf("%d", &isRaining);

    // Check conditions and print the result
    if (isMonday == 1 || isRaining == 1) {
        printf("It's either Monday or Raining.\n");
    } else {
        printf("It's neither Monday nor Raining.\n");
    }

    // Program to check if it's Sunday and Snowing
    int isSunday, isSnowing;

    // Prompt user for inputs
    printf("Is it Sunday? Type 1 to confirm: ");
    scanf("%d", &isSunday);

    printf("Is it Snowing? Type 1 to confirm: ");
    scanf("%d", &isSnowing);

    // Check conditions and print the result
    if (isSunday == 1 && isSnowing == 1) {
        printf("It's Sunday and Snowing.\n");
    } else if (isSunday == 1) {
        printf("It's Sunday.\n");
    } else if (isSnowing == 1) {
        printf("It's Snowing.\n");
    } else {
        printf("It's neither Sunday nor Snowing.\n");
    }

    // Program to check if a number is greater than 9 and less than 100
    int greater_than_number;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &greater_than_number);

    // Check the condition and print the result
    if (greater_than_number > 9 && greater_than_number < 100) {
        printf("%d is greater than 9 and less than 100.\n", greater_than_number);
    } else {
        printf("%d does not satisfy the condition.\n", greater_than_number);
    }

    // Program to check if a number is even or odd
    int a;

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &a);

    // Check if the number is even or odd
    if (a % 2 == 0) {
        printf("The number is divisible by 2 (even).\n");
    } else {
        printf("The number is not divisible by 2 (odd).\n");
    }

    return 0;
}
