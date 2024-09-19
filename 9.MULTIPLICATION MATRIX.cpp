#include <stdio.h>
#define N 10
void multiplyMatrix(int firstMatrix[][N], int secondMatrix[][N], int result[][N], int rows, int cols, int common) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = 0;
            for (int k = 0; k < common; k++) {
                result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}

int main() {
    int firstMatrix[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int secondMatrix[N][N] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[N][N];

    multiplyMatrix(firstMatrix, secondMatrix, result, 3, 3, 3);

    printf("Resultant Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}