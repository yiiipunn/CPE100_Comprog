//Phurithip Paisanworajit 67070503437
#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    double a_sqr, b_sqr, c_sqr;
    double a_root, b_root, c_root;
    scanf("%lf %lf %lf", &a, &b, &c);

    a_sqr = pow(a, 2);
    b_sqr = pow(b, 2);
    c_sqr = pow(c, 2);

    if (a >= 0) {
        a_root = sqrt(a);
    } else {
        a_root = -1; 
    }

    if (b >= 0) {
        b_root = sqrt(b);
    } else {
        b_root = -1; 
    }

    if (c >= 0) {
        c_root = sqrt(c);
    } else {
        c_root = -1; 
    }

    
    printf("Square: a = %.2lf, b = %.2lf, c = %.2lf\n", a_sqr, b_sqr, c_sqr);
    
    printf("Square root: ");
    if (a >= 0) {
        printf("a = %.2lf, ", a_root);
    } else {
        printf("a = Undefined (negative), ");
    }

    if (b >= 0) {
        printf("b = %.2lf, ", b_root);
    } else {
        printf("b = Undefined (negative), ");
    }

    if (c >= 0) {
        printf("c = %.2lf\n", c_root);
    } else {
        printf("c = Undefined (negative)\n");
    }

    return 0;
}