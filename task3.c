#include <stdio.h>

int main() {
    int rows = 5, cols = 5;
    char seating[5][5];

    int studentCount = 0;
    int emptyCount = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((i + j) % 2 == 0) {
                seating[i][j] = 'x';
                studentCount++;
            } else {
                seating[i][j] = 'o';
                emptyCount++;
            }
        }
    }

    printf("Classroom Seating Chart:\n");
    printf("=========================\n");
    printf("(x = Student, o = Empty)\n\n");

    for (int i = 0; i < rows; i++) {
        printf("Row %d ", i + 1);
        for (int j = 0; j < cols; j++) {
            printf("%c ", seating[i][j]);
        }
        printf("\n");
    }

    printf("\nSummary:\n");
    printf("Students seated: %d\n", studentCount);
    printf("Empty desks: %d\n", emptyCount);
    printf("Total desks: %d\n", rows * cols);

    return 0;
}