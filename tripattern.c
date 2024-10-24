#include <stdio.h>

int main() {
    int rows, i, j;

    // Input number of rows for the triangle
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print the triangle
    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        // Print asterisks
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
