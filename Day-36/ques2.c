#include <stdio.h>

int main() {
    int m, n;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);

    int matrix[m][n];
    int sum = 0;

    printf("Enter elements:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j]; // adding directly
        }
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}
