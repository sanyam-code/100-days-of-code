//Write a program to calculate electricity bill based on units consumed with these rates: 
#include <stdio.h>
int main() {
    int units;
    float bill;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);
    if (units < 0) {
        printf("Invalid input. Units cannot be negative.\n");
        return 1;
    }
    if (units <= 100) {
        bill = units * 0.50;
    } else if (units <= 200) {
        bill = (100 * 0.50) + ((units - 100) * 0.75);
    } else if (units <= 300) {
        bill = (100 * 0.50) + (100 * 0.75) + ((units - 200) * 1.20);
    } else {
        bill = (100 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 300) * 1.50);
    }
    printf("The total electricity bill is: $%.2f\n", bill);
    return 0;
}
