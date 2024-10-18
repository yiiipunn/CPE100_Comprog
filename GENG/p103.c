#include <stdio.h>
int main() {
    int n, i;
    unsigned long long fact = 1;
    scanf("%d", &n);

    if (n < 0){
        printf("Error! Factorial of a negative number doesn't exist.");}
        
    else if (n!=0) {
        for (i = 1; i <= n; i++) {
            fact *= i;
        }
        printf("%lld", fact);
        return 0;
    }
    if(n == 0){
        fact =n+1;
        printf("%lld",fact);}

    return 0;
}
