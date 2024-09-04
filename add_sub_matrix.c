#include <stdio.h>

// Function to print a matrix
void printMatrix(int matrix[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int A[][100], int B[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int A[][100], int B[][100], int result[][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

int main() {
    int rows, cols;
    
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);
    
    int matrixA[100][100], matrixB[100][100], result[100][100];
    
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrixA[i][j]);
        }
    }
    
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrixB[i][j]);
        }
    }
    
    // Add matrices
    addMatrices(matrixA, matrixB, result, rows, cols);
    printf("Matrix A + Matrix B:\n");
    printMatrix(result, rows, cols);

    // Subtract matrices
    subtractMatrices(matrixA, matrixB, result, rows, cols);
    printf("Matrix A - Matrix B:\n");
    printMatrix(result, rows, cols);

    return 0;
}
