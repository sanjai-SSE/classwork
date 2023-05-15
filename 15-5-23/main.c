#include <stdio.h>

int isSymmetric(int matrix[SIZE][SIZE]) {
    int i, j;

    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return 0;  
            }
        }
    }

    return 1;  
}

int main() {
    int matrix[SIZE][SIZE] = {{1, 2, 3},
                              {2, 4, 5},
                              {3, 5, 6}};

    if (isSymmetric(matrix)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
