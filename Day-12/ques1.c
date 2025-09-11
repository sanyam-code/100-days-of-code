//Write a program to calculate library fine based on late days as follows: 
#include <stdio.h>
int main() {
    int lateDays;
    float fine;
    printf("Enter the number of late days: ");
    scanf("%d", &lateDays);
    if (lateDays < 0) {
        printf("Invalid input. Late days cannot be negative.\n");
        return 1;
    }
    if (lateDays <= 5) {
        fine = lateDays * 0.50;
    } else if (lateDays <= 10) {
        fine = (5 * 0.50) + ((lateDays - 5) * 1.00);
    } else {
        fine = (5 * 0.50) + (5 * 1.00) + ((lateDays - 10) * 5.00);
    }
    printf("The total library fine is: $%.2f\n", fine);
    return 0;
}
