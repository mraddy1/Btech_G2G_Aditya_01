#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2); // Use %lf for double

    
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
            return 1; 
        }
    } else {
        printf("Error! Invalid operator.\\n");
        return 1; 
    }

    return 0;

}