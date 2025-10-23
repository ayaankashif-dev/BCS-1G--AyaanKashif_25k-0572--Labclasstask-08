#include <stdio.h>

int main() {
    int arr[3][3];
    long long sum = 0;
    long long product = 1;

    printf("Enter elements for a 3x3 matrix:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += arr[i][j];
            product *= arr[i][j];
        }
    }

    printf("\nMatrix entered:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all elements: %lld\n", sum);
    printf("Product of all elements: %lld\n", product);

    return 0;
}