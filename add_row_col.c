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

// Function to add the elements of each row and store the sums in an array
void sumRows(int matrix[][100], int rows, int cols, int rowSum[]) {
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0; // Initialize row sum to 0
        for (int j = 0; j < cols; j++) {
            rowSum[i] += matrix[i][j]; // Add each element in the row to rowSum
        }
    }
}

// Function to add the elements of each column and store the sums in an array
void sumColumns(int matrix[][100], int rows, int cols, int colSum[]) {
    for (int j = 0; j < cols; j++) {
        colSum[j] = 0; // Initialize column sum to 0
        for (int i = 0; i < rows; i++) {
            colSum[j] += matrix[i][j]; // Add each element in the column to colSum
        }
    }
}

int main() {
    int rows, cols;
    
    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);
    
    int matrix[100][100];
    
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("Original Matrix:\n");
    printMatrix(matrix, rows, cols);
    
    int rowSums[100];
    int colSums[100];
    
    // Calculate the sums of each row
    sumRows(matrix, rows, cols, rowSums);
    
    printf("Row Sums:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSums[i]);
    }
    
    // Calculate the sums of each column
    sumColumns(matrix, rows, cols, colSums);
    
    printf("Column Sums:\n");
    for (int j = 0; j < cols; j++) {
        printf("Column %d: %d\n", j + 1, colSums[j]);
    }

    return 0;
}
