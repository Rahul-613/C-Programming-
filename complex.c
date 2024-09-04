#include <stdio.h>

// Define the structure for complex numbers
typedef struct {
    double real;
    double imaginary;
} Complex;

// Function to add two complex numbers
Complex addComplex(Complex num1, Complex num2) {
    Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

// Function to subtract two complex numbers
Complex subtractComplex(Complex num1, Complex num2) {
    Complex result;
    result.real = num1.real - num2.real;
    result.imaginary = num1.imaginary - num2.imaginary;
    return result;
}

int main() {
    Complex complex1, complex2, sum, difference;

    // Read the first complex number
    printf("Enter the real part of the first complex number: ");
    scanf("%lf", &complex1.real);
    printf("Enter the imaginary part of the first complex number: ");
    scanf("%lf", &complex1.imaginary);

    // Read the second complex number
    printf("Enter the real part of the second complex number: ");
    scanf("%lf", &complex2.real);
    printf("Enter the imaginary part of the second complex number: ");
    scanf("%lf", &complex2.imaginary);

    // Calculate the sum and difference of the complex numbers
    sum = addComplex(complex1, complex2);
    difference = subtractComplex(complex1, complex2);

    // Display the results
    printf("Sum: %.2lf + %.2lfi\n", sum.real, sum.imaginary);
    printf("Difference: %.2lf + %.2lfi\n", difference.real, difference.imaginary);

    return 0;
}
