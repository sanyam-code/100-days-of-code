//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main() {
    float radius;
    
    // Input radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    // Calculate area and circumference
    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;
    
    // Display the results
    printf("Area of the circle is %.2f\n", area);
    printf("Circumference of the circle is %.2f\n", circumference);
    
    return 0;
}