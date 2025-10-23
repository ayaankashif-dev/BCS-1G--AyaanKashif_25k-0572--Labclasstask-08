#include <stdio.h>

int main() {
    int arr[3][3] = {
        {12, 34, 56},
        {72, 4, 6},
        {90, 67, 12}
    };

    int max = arr[0][0];
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    printf("Maximum value: %d\n", max);
    printf("Found at index: arr[%d][%d]\n", maxRow, maxCol);

    return 0;

}