//67070503437 Phurithip Paisanworajit
#include <stdio.h>

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int n;

    scanf("%d", &n);

    if (n < 0) {
        printf("Fibonacci is not defined for negative numbers!\n");
    } else {
        printf("Fibonacci of %d is %d\n", n, fib(n));
    }

    return 0;
}