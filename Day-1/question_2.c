//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient;
    
    if (num2 != 0) {
        quotient = (float)num1 / num2;
        printf("Quotient is %.2f\n", quotient);
    } else {
        printf("Quotient is undefined (division by zero)\n");
    }
    
    printf("Sum is %d\n", sum);
    printf("Difference is %d\n", difference);
    printf("Product is %d\n", product);
    
    return 0;
}  