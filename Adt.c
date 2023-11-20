// // Question 1 - Write a C/C++ program to implement addition and subtraction of rational numbers using Abstract Data Type(ADT).

// #include <stdio.h>

// typedef struct {
//     int numerator;
//     int denominator;
// } Rational;

// Rational createRational(int num, int den) {
//     Rational r;
//     r.numerator = num;
//     r.denominator = den;
//     return r;
// }

// Rational addRational(Rational r1, Rational r2) {
//     Rational r;
//     r.numerator = r1.numerator * r2.denominator + r2.numerator * r1.denominator;
//     r.denominator = r1.denominator * r2.denominator;
//     return r;
// }

// Rational subtractRational(Rational r1, Rational r2) {
//     Rational r;
//     r.numerator = r1.numerator * r2.denominator - r2.numerator * r1.denominator;
//     r.denominator = r1.denominator * r2.denominator;
//     return r;
// }

// int main() {
//     int num, den;
    
//     printf("Enter the numerator of the first rational number: ");
//     scanf("%d", &num);
//     printf("Enter the denominator of the first rational number: ");
//     scanf("%d", &den);
//     Rational r1 = createRational(num, den);
    
//     printf("Enter the numerator of the second rational number: ");
//     scanf("%d", &num);
//     printf("Enter the denominator of the second rational number: ");
//     scanf("%d", &den);
//     Rational r2 = createRational(num, den);
    
//     Rational r3 = addRational(r1, r2);
//     Rational r4 = subtractRational(r1, r2);
    
//     printf("Addition: %d/%d\n", r3.numerator, r3.denominator);
//     printf("Subtraction: %d/%d\n", r4.numerator, r4.denominator);
    
//     return 0;
// }
// /////////////////////////////////////////////////////////////////////

// #include <stdio.h>

// typedef struct {
//     float real;
//     float imag;
// } Complex;

// Complex createComplex(float real, float imag) {
//     Complex c;
//     c.real = real;
//     c.imag = imag;
//     return c;
// }

// Complex addComplex(Complex c1, Complex c2) {
//     Complex c;
//     c.real = c1.real + c2.real;
//     c.imag = c1.imag + c2.imag;
//     return c;
// }

// Complex subtractComplex(Complex c1, Complex c2) {
//     Complex c;
//     c.real = c1.real - c2.real;
//     c.imag = c1.imag - c2.imag;
//     return c;
// }

// int main() {
//     float real, imag;
    
//     printf("Enter the real part of the first complex number: ");
//     scanf("%f", &real);
//     printf("Enter the imaginary part of the first complex number: ");
//     scanf("%f", &imag);
//     Complex c1 = createComplex(real, imag);
    
//     printf("Enter the real part of the second complex number: ");
//     scanf("%f", &real);
//     printf("Enter the imaginary part of the second complex number: ");
//     scanf("%f", &imag);
//     Complex c2 = createComplex(real, imag);
    
//     Complex c3 = addComplex(c1, c2);
//     Complex c4 = subtractComplex(c1, c2);
    
//     printf("Addition: %.2f + %.2fi\n", c3.real, c3.imag);
//     printf("Subtraction: %.2f + %.2fi\n", c4.real, c4.imag);
    
//     return 0;
// }

// // Question 3 - Write a C/C++ program to implement multiplication and equality check of rational numbers using Abstract Data Type(ADT).


// #include <stdio.h>

// typedef struct {
//     int numerator;
//     int denominator;
// } Rational;

// Rational createRational(int num, int den) {
//     Rational r;
//     r.numerator = num;
//     r.denominator = den;
//     return r;
// }

// Rational multiplyRational(Rational r1, Rational r2) {
//     Rational r;
//     r.numerator = r1.numerator * r2.numerator;
//     r.denominator = r1.denominator * r2.denominator;
//     return r;
// }

// int isEqualRational(Rational r1, Rational r2) {
//     return r1.numerator * r2.denominator == r2.numerator * r1.denominator;
// }

// int main() {
//     int num, den;
    
//     printf("Enter the numerator of the first rational number: ");
//     scanf("%d", &num);
//     printf("Enter the denominator of the first rational number: ");
//     scanf("%d", &den);
//     Rational r1 = createRational(num, den);
    
//     printf("Enter the numerator of the second rational number: ");
//     scanf("%d", &num);
//     printf("Enter the denominator of the second rational number: ");
//     scanf("%d", &den);
//     Rational r2 = createRational(num, den);
    
//     Rational r3 = multiplyRational(r1, r2);
//     printf("Multiplication: %d/%d\n", r3.numerator, r3.denominator);
    
//     printf("Equality check: %s\n", isEqualRational(r1, r2) ? "Equal" : "Not Equal");
    
//     return 0;
// }

// /////////////////////////////////////////////////

// // Question 4 - Write a C/C++ program to implement multiplication and equality check of complex numbers using Abstract Data Type(ADT).

#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

Complex createComplex(float real, float imag) {
    Complex c;
    c.real = real;
    c.imag = imag;
    return c;
}

Complex multiplyComplex(Complex c1, Complex c2) {
    Complex c;
    c.real = c1.real * c2.real - c1.imag * c2.imag;
    c.imag = c1.real * c2.imag + c1.imag * c2.real;
    return c;
}

int isEqualComplex(Complex c1, Complex c2) {
    return c1.real == c2.real && c1.imag == c2.imag;
}

int main() {
    float real, imag;
    
    printf("Enter the real part of the first complex number: ");
    scanf("%f", &real);
    printf("Enter the imaginary part of the first complex number: ");
    scanf("%f", &imag);
    Complex c1 = createComplex(real, imag);
    
    printf("Enter the real part of the second complex number: ");
    scanf("%f", &real);
    printf("Enter the imaginary part of the second complex number: ");
    scanf("%f", &imag);
    Complex c2 = createComplex(real, imag);
    
    Complex c3 = multiplyComplex(c1, c2);
    printf("Multiplication: %.2f + %.2fi\n", c3.real, c3.imag);
    printf("Equality check: %s\n", isEqualComplex(c1, c2) ? "Equal" : "Not Equal");
    
    return 0;
}