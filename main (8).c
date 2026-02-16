#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    // Prompt user to enter an operator and two numbers
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2); // Use %lf for double

    // Perform the calculation based on the operator using if-else if
    if (operator == '+') {
        printf("%.2lf + %.2lf = %.2lf\\n", num1, num2, num1 + num2);
    } else if (operator == '-') {
        printf("%.2lf - %.2lf = %.2lf\\n", num1, num2, num1 - num2);
    } else if (operator == '*') {
        printf("%.2lf * %.2lf = %.2lf\\n", num1, num2, num1 * num2);
    } else if (operator == '/') {
        if (num2 != 0) {
            printf("%.2lf / %.2lf = %.2lf\\n", num1, num2, num1 / num2);
        } else {
            printf("Error! Division by zero is not allowed.\\n");
            return 1; // Exit with an error code
        }
    } else {
        printf("Error! Invalid operator.\\n");
        return 1; // Exit with an error code
    }

    return 0;
}