#include<stdio.h>
int main(){
    float a, b;
    
    printf("enter first number");
    scanf("%f",&a);
    
    printf("enter second number");
    scanf("%f",&b);
    
    printf("sum = %.2f\n", a + b);
    printf("difference = %.2f\n", a - b);
    printf("product = %.2f\n", a*b);
    printf("divison = %f.2\n", a/b);
    
    return 0;
    
}