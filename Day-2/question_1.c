//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main() {
    float length, breadth;
    
    // Input length and breadth of the rectangle
    printf("Enter length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);
    
    // Calculate area and perimeter
    float area = length * breadth;
    float perimeter = 2 * (length + breadth);
    
    // Display the results
    printf("Area of the rectangle is %.2f\n", area);
    printf("Perimeter of the rectangle is %.2f\n", perimeter);
    
    return 0;
}