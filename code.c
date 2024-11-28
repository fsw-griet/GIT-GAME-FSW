#include <stdio.h>

void matrix_multiply(int A[3][3], int B[3][3], int result[3][3])
{
    int i, j, k;

    // Initialize the result matrix to 0
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            result[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main()
{
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int B[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}};

    int result[3][3]; // Matrix to store the result

    matrix_multiply(A, B, result);

    printf("Result of matrix multiplication:\n");
    while (1)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%d ", result[i][j]);
            }
            printf("\n");
        }
    }

return 0;
}
