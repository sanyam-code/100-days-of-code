//Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main() {
    int a, b, temp;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Display original values
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swap the numbers using a third variable
    temp = a;
    a = b;
    b = temp;

    // Display swapped values
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
