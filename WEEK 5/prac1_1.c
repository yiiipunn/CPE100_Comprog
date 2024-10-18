//Phurithip Paisanworajit 67070503437
#include <stdio.h>


int prime(long long n) {
    if (n < 2) return 0;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) 
        return 0;
    }
   
}


void fib_prime(long long min, long long max) {
    long long x = 0, y = 1, fib = 0;

    while (fib <= max) {
        if (fib >= min && prime(fib)) {
            printf("%lld\n", fib);
        }
        fib = x + y;
        x = y;
        y = fib;
    }
}

int main() {
    long long min, max;
    scanf("%lld %lld", &min, &max);

    if (min > max) {
        printf("Invalid input\n");
        return 0;
    }

    fib_prime(min, max);
    return 0;
}