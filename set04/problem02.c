#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

int main() {
    Fraction f1 = {2, 3}; // Represents the fraction 2/3
    Fraction f2 = {5, 7}; // Represents the fraction 5/7
    
    // Perform operations with fractions
    Fraction sum, product;
    
    sum.num = f1.num * f2.den + f2.num * f1.den;
    sum.den = f1.den * f2.den;
    
    product.num = f1.num * f2.num;
    product.den = f1.den * f2.den;
    
    // Print the results
    printf("Sum: %d/%d\n", sum.num, sum.den);
    printf("Product: %d/%d\n", product.num, product.den);
    
    return 0;
}
