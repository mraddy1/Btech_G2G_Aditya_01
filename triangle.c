#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    
    if (a + b > c && a + c > b && b + c > a) {
        printf("The given sides form a VALID triangle.\n");

        
        if (a == b && b == c) {
            printf("It is an EQUILATERAL triangle.\n");
        }
        else if (a == b || b == c || a == c) {
            printf("It is an ISOSCELES triangle.\n");
        }
        else {
            printf("It is a SCALENE triangle.\n");
        }
    } 
    else {
        printf("The given sides do NOT form a valid triangle.\n");
    }

    return 0;
}