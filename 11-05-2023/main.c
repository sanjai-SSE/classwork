#include <stdio.h>
int rankOfMatrix(int mat[][COL])
{
    int rank = COL;

    for (int row = 0; row < rank; row++) {
        // Check for non-zero diagonal element
        if (mat[row][row]) {
            for (int col = 0; col < ROW; col++) {
                if (col != row) {
                    double mult = (double)mat[col][row] /
                                  mat[row][row];
                    for (int i = 0; i < rank; i++)
                        mat[col][i] -= mult * mat[row][i];
                }
            }
        }
        else {
            int reduce = 1;

            for (int i = row + 1; i < ROW; i++) {
                if (mat[i][row]) {
                    for (int j = 0; j < rank; j++) {
                        int temp = mat[row][j];
                        mat[row][j] = mat[i][j];
                        mat[i][j] = temp;
                    }
                    reduce = 0;
                    break;
                }
            }

            if (reduce) {
                rank--;

                for (int i = 0; i < ROW; i++)
                    mat[i][row] = mat[i][rank];
            }

            row--;
        }
    }

    return rank;
}

int main()
{
    int mat[][COL] = {{10, 20, 10},
                      {-20, -30, 10},
                      {30, 50, 0}};

    printf("Rank of the matrix is: %d", rankOfMatrix(mat));

    return 0;
}
